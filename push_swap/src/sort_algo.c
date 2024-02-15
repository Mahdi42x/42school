/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:25:55 by mawada            #+#    #+#             */
/*   Updated: 2024/02/15 17:47:44 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	while (ft_lstsize(*stack_a) != 3)
		pb(stack_a, stack_b);
	printf("asd");
	sort_three(stack_a);
}