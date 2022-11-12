/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:44:49 by ahamou            #+#    #+#             */
/*   Updated: 2022/11/04 03:52:22 by ahamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*head;

	if (lst == NULL)
		return (NULL);
	while (lst)
	{
		head = lst;
		lst = lst -> next;
	}
	return (head);
}
