/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 09:47:34 by ahamou            #+#    #+#             */
/*   Updated: 2022/11/05 11:52:22 by ahamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	*s;
	char	t;

	s = (char *)str;
	t = (unsigned char)c;
	i = 0;
	if (t == 0)
	{
		i = ft_strlen(s);
		return (&s[i]);
	}
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
