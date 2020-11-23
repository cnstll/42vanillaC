/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calle <calle@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 10:11:01 by calle             #+#    #+#             */
/*   Updated: 2020/11/21 16:44:54 by calle            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *nptr)
{
	char	*nbr;
	int	sign;
	int	n;
	int	i;

	nbr = (char *)nptr;
	i = 0;
	n = 0;
	sign = 1;
	if (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (nbr[i] > 47 && nbr[i] < 58)
	{
		if (nbr[i + 1] > 47 && nbr[i + 1] < 58)
			n = (n + (int)(nbr[i]) % 48) * 10;
		else
			n = (n + (int)(nbr[i]) % 48);
		i++;
	}
	return (n * sign);
}
