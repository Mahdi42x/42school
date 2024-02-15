/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:26:33 by mawada            #+#    #+#             */
/*   Updated: 2024/02/15 17:35:54 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **stack)
{
	*stack = (*stack)->next;
	(*stack)->prev->prev = *stack;
	(*stack)->prev->next = (*stack)->next;
	if ((*stack)->next)
		(*stack)->next->prev = (*stack)->prev;
	(*stack)->next = (*stack)->prev;
	(*stack)->prev = NULL;
}

void	push(t_list **stack, t_list **node)
{
	t_list	*push_node;

	if (!node || !(*node))
		return ;
	push_node = ft_lstnew((*node)->content);
	if (!push_node)
	{
		// Fehlerbehandlung: Speicher konnte nicht allokiert werden
		exit(1);
	}
	ft_lstadd_front(stack, push_node);
	if (ft_lstsize(*node) == 1)
		ft_free(node);
	else
	{
		*node = (*node)->next;
		if (*node)
			free((*node)->prev);
	}
}

void	rotat(t_list **stack)
{
	t_list	*first;
	t_list	*second;
	t_list	*last;

	first = *stack;
	second = (*stack)->next;
	last = ft_lstlast(*stack);
	ft_lstadd_back(&second, first);
	if (second && second->next)
	{
		second->prev = NULL;
		first->prev = last;
		first->next = NULL;
		*stack = second;
	}
}

void	rev_rotat(t_list **stack)
{
	t_list	*last;
	t_list	*first;
	t_list	*second_last;

	first = *stack;
	last = ft_lstlast(*stack);
	second_last = last->prev;
	ft_lstadd_front(stack, last);
	(*stack)->next = first;
	second_last->next = NULL;
}
