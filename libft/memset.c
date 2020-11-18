/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:25:00 by calle             #+#    #+#             */
/*   Updated: 2020/11/16 15:10:27 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void *ft_memset(void *s, int c, size_t n)
{
	unsigned int i;
	unsigned char *ptr = s; 

	if (s == NULL)
		return (NULL);
	i = 0;
	while(i < n)
	{
		ptr[i] = c;
		i++;
	}
	return s;
}
