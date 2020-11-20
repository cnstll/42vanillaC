/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:28:00 by calle             #+#    #+#             */
/*   Updated: 2020/11/20 21:53:53 by calle            ###   ########.fr       */
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
	j = 0;
	while (s[i] && k < ct)
	{
		//printf("In write_sub_str, beginning while loop s[i] = %c -- i = %lu -- j = %d -- k = %d\n",s[i], i,j,k);
		if (s[i] != c)
		{
			strs[k][j] = s[i];
			printf("Written --- strs[%d][%d] = %c\n",k,j, s[i]);
			j++;
			if (s[i + 1] == c || !s[i + 1])	
			{
				strs[k][j] = '\0';
				printf("Written --- strs[%d][%d] = 0\n",k,j);
				k++;
				j = 0;	
			}
		}
		i++;
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
		printf("In malloc_sub_str, beginning while loop i = %lu -- j = %d -- k = %d\n", i,j,k);
		if ((s[i] != c))
		{	
			j++;
			if (s[i + 1] == c || !s[i + 1])
			{	
				printf("trying to alloc mem = %d for word no %d\n", j + 1, k);
				if (!(strs[k] = (char*)malloc(sizeof(char) * (j + 1))))
					return (NULL);
				printf("In SUB str malloc word length attrib = %d for word no %d\n", j + 1, k);
				k++;
				j = 0;
			}
		}
		i++;
	}
	printf("After end of while loop i = %lu -- j = %d -- k = %d\n", i,j,k);
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
	printf("Word count = %d\n", ct);	
	if (!s[0])
		return (NULL);
	printf("before allocating memory to strs\n");
	if (!(strs = (char**)malloc(sizeof(char*) * (ct + 1))))
		return (NULL);
	if(!(malloc_sub_str(strs, s, c, ct)))
	{	
		free((void *)strs);
		return (NULL);
	}	
	else
		return (write_sub_str(strs, s, c, ct));
}
