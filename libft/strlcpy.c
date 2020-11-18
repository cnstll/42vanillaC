/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:17:27 by calle             #+#    #+#             */
/*   Updated: 2020/11/18 16:18:13 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "stdlib.h"

size_t		ft_strlen(const char *s);

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;
	
	src_len = ft_strlen(src);
	i = 0;
	while (i < size && src[i])
	{	
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);		
}
