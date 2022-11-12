/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:59:06 by ahamou            #+#    #+#             */
/*   Updated: 2022/11/04 03:59:06 by ahamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*s;

	s = (char *)str;
	while (*s)
		s++;
	while (str <= s)
	{
		if (*s == (char)c)
			return (s);
		s--;
	}
	return (NULL);
}
