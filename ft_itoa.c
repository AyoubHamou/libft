/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:10:07 by ahamou            #+#    #+#             */
/*   Updated: 2022/11/03 02:32:38 by ahamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_len(n);
	s = malloc(i + 1);
	if (!s)
		return (NULL);
	s[i] = '\0';
	i--;
	if (n < 0)
	{
		s[0] = '-';
		n = n * (-1);
	}
	if (n == 0)
		s[0] = '0';
	while (n > 0)
	{
		s[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (s);
}
