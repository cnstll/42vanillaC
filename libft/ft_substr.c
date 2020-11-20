/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 14:38:47 by calle             #+#    #+#             */
/*   Updated: 2020/11/20 21:54:21 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start,size_t len)
{
	char	*subs;
	size_t	i;
	size_t	s_size;

	s_size = ft_strlen(s) - start;
	if (s_size < len)
	{
		if (!(subs = (char *)malloc(sizeof(char) * (s_size + 1))))
			return (NULL);
	}
	else
		if (!(subs = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
	i = start;
	while (i < len && s[start])
	{
		subs[i] = s[start];
		i++;
		start++;	
	}
	return (subs);	
}
