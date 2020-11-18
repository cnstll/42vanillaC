/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:17:27 by calle             #+#    #+#             */
/*   Updated: 2020/11/17 16:57:58 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t strlen(const char *s)
{
	unsigned int i;
	char *str;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char *ptr_src;
	size_t src_len; 
	
	ptr_src = src;
	src_len = strlen(src);
	while ((size - 1)-- && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (src_len);		
}
