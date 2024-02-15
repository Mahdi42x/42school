/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:26:50 by mawada            #+#    #+#             */
/*   Updated: 2024/02/15 16:36:26 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//überprüft, ob die Elemente im übergebenen Stapel
//stack in aufsteigender Reihenfolge sortiert.
int	check_order(t_list *stack)
{
	t_list	*count;

	if (stack == NULL)
		return (0);
	count = stack;
	while (count->next)
	{
		if (count->content <= count->next->content)
			count = count->next;
		else
			return (0);
	}
	return (1);
}

int	error_check(char *nbr)
{
	if (!(*nbr == '+'
			|| *nbr == '-'
			|| (*nbr >= '0' && *nbr <= '9')))
		return (1);
	if ((*nbr == '+'
			|| *nbr == '-')
		&& !(nbr[1] >= '0' && nbr[1] <= '9'))
		return (1);
	while (*++nbr)
	{
		if (!(*nbr >= '0' && *nbr <= '9'))
			return (1);
	}
	return (0);
}

int	error_dup_check(t_list *stack, int n)
{
	if (!stack)
		return (0);
	while (stack)
	{
		if (stack->content == n)
			return (1);
		stack = stack->next;
	}
	return (0);
}
