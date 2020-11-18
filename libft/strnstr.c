/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:21:27 by calle             #+#    #+#             */
/*   Updated: 2020/11/18 17:33:03 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	"libft.h" 

char		*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s2_len; 
	
	s2_len = ft_strlen(s2);
	if (s2_len == 0)
		return ((char*)s1);
	i = 0;
	j = 0;
	while (i < len && s1[i] && j <= s2_len && s2[j])
	{
		if (j > 0 && s2[j] != s1[i])
			j = 0;
		else if (s2[j] == s1[i])
			j++;
		i++;
	}
	printf("i  = %ld -- j = %ld -- s2_len = %ld\n",i,j,s2_len);
	if (j == s2_len)
		return ((char*)(s1) + (i - s2_len));
	else
		return (NULL);
}
