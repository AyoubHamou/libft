/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:38:47 by ahamou            #+#    #+#             */
/*   Updated: 2022/11/04 04:15:22 by ahamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if (len)
	{
		while (i < len && (char )haystack[i])
		{
			j = 0;
			if ((char )haystack[i] == (char )needle[0])
			{
				while ((char )haystack[i + j] == (char )needle[j]
					&& i + j < len)
				{
					if ((char )needle[j + 1] == '\0')
						return ((char *)haystack + i);
					j++;
				}
			}
			i++;
		}
	}
	return (0);
}
