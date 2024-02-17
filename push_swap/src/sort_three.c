/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:09:23 by mawada            #+#    #+#             */
/*   Updated: 2024/02/17 11:48:14 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_list **stack_a)
{
	t_list	*highest_node;

	highest_node = get_max(*stack_a);
	if (*stack_a == highest_node)
		ra(stack_a);
	else if ((*stack_a)->next == highest_node)
		rra(stack_a);
	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a);
}

t_list	*get_max(t_list *stack)
{
	t_list	*max;
	t_list	*highest_node;
	int		max_nbr;

	max = stack;
	highest_node = stack;
	max_nbr = max->content;
	while (max)
	{
		if (max_nbr < max->content)
			max_nbr = max->content;
		max = max->next;
	}
	while (highest_node)
	{
		if (highest_node->content == max_nbr)
			return (highest_node);
		else
			highest_node = highest_node->next;
	}
	return (0);
}

t_list	*get_min(t_list *stack)
{
	t_list	*min;
	t_list	*min_node;
	int		min_nbr;

	min = stack;
	min_node = stack;
	min_nbr = min->content;
	while (min)
	{
		if (min_nbr > min->content)
			min_nbr = min->content;
		min = min->next;
	}
	while (min_node)
	{
		if (min_node->content == min_nbr)
			return (min_node);
		else
			min_node = min_node->next;
	}
	return (0);
}
