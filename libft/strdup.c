/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 18:14:23 by calle             #+#    #+#             */
/*   Updated: 2020/11/18 18:54:37 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strdup(const char *s)
{
	char *dup;
	int i;

	if(!(dup = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (i <= ft_strlen(s))
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}
