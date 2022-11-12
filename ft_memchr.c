/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:25:56 by ahamou            #+#    #+#             */
/*   Updated: 2022/11/02 02:31:05 by ahamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	l;
	size_t			i;

	str = (unsigned char *)s;
	l = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == l)
			return (str + i);
		i++;
	}
	return (0);
}
