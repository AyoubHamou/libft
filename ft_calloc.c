/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:25:00 by ahamou            #+#    #+#             */
/*   Updated: 2022/11/03 02:24:36 by ahamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (size != 0 && count > SIZE_MAX / size)
		return (0);
	str = malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
