/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:25:55 by mawada            #+#    #+#             */
/*   Updated: 2024/02/17 16:49:56 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	t_list	*smallest;

	while (ft_lstsize(*stack_a) != 3)
	{
		pb(stack_b, stack_a);
	}
	sort_three(stack_a);
	while (*stack_b)
	{
		init_nodes(*stack_a, *stack_b);
		move_nodes(stack_a, stack_b);
	}
	set_current_position(*stack_a);
	smallest = get_min(*stack_a);
	if (smallest->above_median)
	{
		while (*stack_a != smallest)
		{
			ra(stack_a);
		}
	}
	else
	{
		while (*stack_a != smallest)
		{
			rra(stack_a);
		}
	}
}
