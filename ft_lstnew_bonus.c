/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:14:15 by ahamou            #+#    #+#             */
/*   Updated: 2022/11/03 23:13:19 by ahamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc (sizeof (t_list));
	if (head == NULL)
		return (NULL);
	head -> content = content;
	head -> next = NULL;
	return (head);
}
