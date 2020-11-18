/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:40:29 by calle             #+#    #+#             */
/*   Updated: 2020/11/18 18:54:08 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *ptr;
	
	if (nmenb == 0 || size == 0)
		return (NULL);	
	if (!(ptr = malloc(nmenb * size)))
		return (NULL);
	if (ptr)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}
