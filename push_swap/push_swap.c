/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:09:48 by mawada            #+#    #+#             */
/*   Updated: 2024/02/15 17:46:28 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list		*stack_a;
	t_list		*stack_b;	

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 2)
		stack_a = parse_string_input_to_stack(argv, stack_a);
	else
		stack_a = parse_arguments_to_stack(stack_a, argc, argv);
	if (check_order(stack_a) == 0)
	{
		if (ft_lstsize(stack_a) == 2)
			sa(&stack_a);
		else if (ft_lstsize(stack_a) == 3)
			sort_three(&stack_a);
		else
			sort_stack(&stack_a, &stack_b);
	}
	ft_free(&stack_a);
	return (0);
}
