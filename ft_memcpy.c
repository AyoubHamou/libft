/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:05:37 by ahamou            #+#    #+#             */
/*   Updated: 2022/11/05 11:52:43 by ahamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destination;
	char	*source;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	destination = (char *)dest;
	source = (char *)src;
	i = 0;
	if (src == dest)
		return ((void *)destination);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
