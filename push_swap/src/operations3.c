/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_operations3.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:46:06 by mawada            #+#    #+#             */
/*   Updated: 2024/02/15 13:59:16 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_list **stack_a, t_list **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	rotat(stack_a);
	rotat(stack_b);
	ft_printf("rr\n");
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rev_rotat(stack_a);
	rev_rotat(stack_b);
	ft_printf("rrr\n");
}
