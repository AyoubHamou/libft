/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 00:27:09 by ahamou            #+#    #+#             */
/*   Updated: 2022/11/07 08:57:40 by ahamou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back;

	back = *lst;
	if (!lst && !new)
		return ;
	if (*lst)
	{
		back = ft_lstlast(back);
		back->next = new;
	}
	else
		*lst = new;
}
