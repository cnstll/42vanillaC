/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 15:26:07 by calle             #+#    #+#             */
/*   Updated: 2020/11/17 17:03:28 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
	char *ptr_chr;
	
	c = (unsigned char)c;
	s = (char*)s;
	ptr_chr = NULL;
	while (*s++)
		if (*s == c)
			ptr_chr = s;
	return (ptr_chr);
}
