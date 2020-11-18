/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:52:19 by calle             #+#    #+#             */
/*   Updated: 2020/11/16 18:21:10 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int  i;
	unsigned char *ptr_dest; 
	unsigned const char *ptr_src;
	
	if (dest == NULL)
		return (NULL);
	i = 0;
	ptr_dest = dest;
	ptr_src = src;
	while (i < n && ptr_src[i] != c)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	if (ptr_src[i] == c)
	{
		ptr_dest[i] = c;
		return (ptr_dest + (i + 1));
	}
	else 
		return (NULL);	
}
