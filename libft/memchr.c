/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:32:48 by calle             #+#    #+#             */
/*   Updated: 2020/11/21 18:52:30 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_src;

	ptr_src = (unsigned char*)s;
	while (n-- && *ptr_src != c)
		ptr_src++;
	if (*ptr_src == c)
		return (ptr_src);
	else
		return (NULL);
}
