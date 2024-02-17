/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 12:49:28 by mawada            #+#    #+#             */
/*   Updated: 2024/02/17 15:38:08 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
 * Set the current position of every node 
 * in the current state-configuration
*/

//setzt für jedes Element die aktuelle
//Position (current_position) im Stapel.
//und zeigt den median an
//Insgesamt berechnet diese Funktion also die Position jedes Elements im Stapel und bestimmt,
//ob jedes Element über oder unter dem Median liegt, basierend auf der mittleren Position des Stapels.
void	set_current_position(t_list *stack)
{
	int	i;
	int	centerline;

	i = 0;
	if (stack == NULL)
		return;
	centerline = ft_lstsize(stack) / 2;
	while (stack)
	{
		stack->current_position = i;
		if (i <= centerline)
			stack->above_median = true;
		else
			stack->above_median = false;
		stack = stack->next;
		++i;
	}
}

void	set_target_node(t_list *a, t_list *b)
{
	t_list	*current_a;
	t_list	*target_node;
	long			best_match_index;

	while (b) //Diese Schleife durchläuft den Stapel 'b', um für jeden Knoten in 'b' einen Zielknoten aus 'a' zuzuweisen.
	{
		best_match_index = LONG_MAX; // Initialisierung der Variable best_match_index mit dem maximalen Wert von long, um den Index des besten Übereinstimmungsknotens zu speichern.
		current_a = a; //Initialisierung des Zeigers current_a auf den Anfang des Stapels 'a', um den Stapel 'a' zu durchlaufen.
		while (current_a)
		{
			if (current_a->content > b->content
				&& current_a->content < best_match_index)
			{
				best_match_index = current_a->content;
				target_node = current_a;
			}
			current_a = current_a->next;
		}
		if (LONG_MAX == best_match_index)
			b->target_node = get_min(a);
		else
			b->target_node = target_node;
		b = b->next;
	}
}

void	set_price(t_list *a, t_list *b)
{
	int	len_a;
	int	len_b;

	len_a = ft_lstsize(a);
	len_b = ft_lstsize(b);
	while (b)
	{
		b->push_price = b->current_position;
		if (!(b->above_median))
			b->push_price = len_b - (b->current_position);
		if (b->target_node->above_median)
			b->push_price += b->target_node->current_position;
		else
			b->push_price += len_a - (b->target_node->current_position);
		b = b->next;
	}
}

void	set_cheapest(t_list *b)
{
	long			best_match_value;
	t_list	*best_match_node;

	if (NULL == b)
		return ;
	best_match_value = LONG_MAX;
	while (b)
	{
		if (b->push_price < best_match_value)
		{
			best_match_value = b->push_price;
			best_match_node = b;
		}
		b = b->next;
	}
	best_match_node->cheapest = true;
}

void	init_nodes(t_list *stack_a, t_list *stack_b)
{
	set_current_position(stack_a);
	set_current_position(stack_b);
	set_target_node(stack_a, stack_b);
	set_price(stack_a, stack_b);
	set_cheapest(stack_b);
}