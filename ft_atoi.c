/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:50:59 by ahamou            #+#    #+#             */
/*   Updated: 2022/11/03 02:23:23 by ahamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	last_value(int s)
{
	if (s == 1)
		return (-1);
	return (0);
}

int	ft_atoi(const char	*str)
{
	unsigned long long	result;
	int					sign;
	int					i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
		if (result > 9223372036854775807)
			return (last_value(sign));
	}
	return (result * sign);
}
