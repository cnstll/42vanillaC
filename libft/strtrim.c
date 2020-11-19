/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:36:46 by calle             #+#    #+#             */
/*   Updated: 2020/11/19 16:06:44 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int		is_charset (char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;	
	}
	return (0);	
}

int		ctn_charset (const char *str, const char *set)
{
	int	i;
	int	count;
	
	i = 0;
	while (str[i])
	{
		if (is_charset (str[i], set) == 0)
		    count++;
		i++;
	}
	return (count);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int	j;
	int	k;
	
	if (!(ret = (char *)malloc(sizeof(char) * (ctn_charset(s1, set) + 1))))
		return (NULL);	
	j = 0;
	k = 0;	
	while (s1[j])
	{
		if (is_charset(s1[j], set) == 0)
		{
			ret[k] = s1[j];
			k++; 
		}
		j++;
	}
	ret[k] = '\0';
	return (ret);
}

