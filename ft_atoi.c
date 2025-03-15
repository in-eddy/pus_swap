/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieddaoud <ieddaoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 00:20:17 by ieddaoud          #+#    #+#             */
/*   Updated: 2025/02/24 16:33:27 by ieddaoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	check(long nb, int sign)
{
	if (nb == 2147483648)
		return (nb * sign);
	if ((nb > 2147483647 || nb < -2147483648))
		return (2147483648);
	return (nb * sign);
}

long	ft_atoi(char *str)
{
	int		i;
	long	nb;
	int		sign;

	nb = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (nb > (nb * 10) + (str[i] - 48))
			return (2147483648);
		nb = (nb * 10) + (str[i] - 48);
		i++;
	}
	return (check(nb, sign));
}
