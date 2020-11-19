/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:28:00 by calle             #+#    #+#             */
/*   Updated: 2020/11/19 19:34:49 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**write_sub_str(char **strs, char const *s, char c, int ct)
{
	size_t	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i] && k < ct)
	{
		j = 0;
		while (!(s[i] == c && s[i + 1] != c && i != 0 && i != ft_strlen(s)))
		{
			if (s[i] != c)
			{
				strs[k][j] = s[i];
				j++;
			}
			i++;	
		}
		strs[k][j] = 0;
		i++;
		k++;
	}
	return (strs);	
}

char		*malloc_sub_str(char **strs, char const *s, char c, int ct)
{
	size_t	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] && k < ct)
	{
		if (s[i] == c && s[i + 1] != c && i != 0 && i != ft_strlen(s))
		{	
			if (!(strs[k] = (char*)malloc(sizeof(char) * (j + 1))))
				return (NULL);
			k++;
			j = 0;
		}
		if (s[i] != c)
			j++;
		i++;
	}
	if (!(strs[k] = (char*)malloc(sizeof(char))))
		return (NULL);
	strs[k] = 0;
	return ("ok");
}

int		ct_sub_str(char const *s, char c)
{
	int	ct;
	size_t	i;
	
	ct = 0;
	i = 0;
	if (!s[0])
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && i != 0 && i != ft_strlen(s))
			ct++;
		i++;
	}
	return (ct + 1);
}

char		**ft_split(char const *s, char c)
{
	char	**strs;
	int	ct;
	
	ct = ct_sub_str(s, c);
	if (!s[0])
		return (NULL);
	if (!(strs = (char**)malloc(sizeof(char*) * (ct + 1))))
		return (NULL);
	if(!(malloc_sub_str(strs, s, c, ct)))
	{	
		free(strs);
		return (NULL);
	}	
	else
		return (write_sub_str(strs, s, c, ct));
}
