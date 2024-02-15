/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:07:53 by mawada            #+#    #+#             */
/*   Updated: 2024/02/15 15:04:46 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*first;

	first = *lst;
	if (lst)
	{
		if (first)
		{
			new->next = first;
			first->prev = new;
		}
		new->prev = NULL;
		*lst = new;
	}
}
