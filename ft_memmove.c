/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:03:03 by ahamou            #+#    #+#             */
/*   Updated: 2022/11/05 11:52:33 by ahamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*destination;
	unsigned char	*source;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	i = 0;
	if (destination > source)
	{
		while (len--)
		{
			destination[len] = source[len];
		}
	}
	else
	{
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	}
	return (dest);
}
