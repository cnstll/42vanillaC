/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:36:46 by calle             #+#    #+#             */
/*   Updated: 2020/11/24 14:13:42 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_charset(char c, const char *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int		cnt_charset_lead(const char *str, const char *set, size_t len)
{
	size_t		cnt;

	cnt = 0;
	while (is_charset(str[cnt], set) == 1 && cnt < len)
		cnt++;
	if (cnt == len)
		return (0);
	else
		return (cnt);
}

static int		cnt_charset_tail(const char *str, const char *set, size_t len)
{
	size_t		cnt;

	cnt = len - 1;
	while (is_charset(str[cnt], set) == 1 && cnt > 0)
		cnt--;
	if (cnt == 0)
		return (len);
	else
		return (len - cnt - 1);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char		*ret;
	size_t		j;
	int		k;
	size_t		len1;
	size_t		mem;

	len1 = ft_strlen(s1);
	mem = len1 - cnt_charset_lead(s1, set, len1)
			- cnt_charset_tail(s1, set, len1);
	j = cnt_charset_lead(s1, set, len1);
	k = 0;
	if (!(ret = (char *)malloc(sizeof(char) * (mem))))
		return (NULL);
	while (s1[j] && j < len1 - cnt_charset_tail(s1, set, len1))
	{
		ret[k] = s1[j];
		k++;
		j++;
	}
	k++;
	ret[k] = '\0';
	return (ret);
}
