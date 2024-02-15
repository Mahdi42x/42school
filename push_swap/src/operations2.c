/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_operations2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:45:26 by mawada            #+#    #+#             */
/*   Updated: 2024/02/15 13:59:10 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_list **stack_b)
{
	rotat(stack_b);
	ft_printf("rb\n");
}

void	rra(t_list **stack_a)
{
	rev_rotat(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_list **stack_b)
{
	rev_rotat(stack_b);
	ft_printf("rrb\n");
}
