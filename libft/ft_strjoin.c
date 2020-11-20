/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:20:35 by calle             #+#    #+#             */
/*   Updated: 2020/11/20 21:54:09 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char *concat;
	size_t	i;

	len1 = ft_strlen(s1);	
	len2 = ft_strlen(s2);
	i = 0;
	if (!(concat = (char *)malloc(sizeof(char) * (len1 + len2 + 1))))
		return (NULL);
	while (i <= len1)
	{
		concat[i] = s1[i];
		i++;
	}
	i = 0;
	while (i <= len2)
	{
		concat[i] = s2[i];
		i++;
	}
	concat[i] = '\0';
	return (concat);
}
