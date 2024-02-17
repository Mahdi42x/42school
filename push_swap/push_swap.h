/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:09:59 by mawada            #+#    #+#             */
/*   Updated: 2024/02/17 16:01:18 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "printf/ft_printf.h"
# include <stdlib.h>
# include <ctype.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct s_list
{
	int					content; //value
	int					current_position; //currento pusitino
	int					push_price; //price to push :D
	bool				above_median; //when even the average of the 2 middle ones when not, the middle
	bool				cheapest; // the cheapest target node
	struct s_list		*target_node;
	struct s_list		*next;
	struct s_list		*prev;
}	t_list;

//libft functions
int		ft_atoi(const char *nptr);
char	**ft_split(char const *s, char c);
void	*ft_calloc(size_t nmemb, size_t size);
size_t	ft_strlen(const char *s);

//libft list functions
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);

//parsing functions
t_list	*parse_string_input_to_stack(char **argv, t_list *stack_a);
t_list	*parse_arguments_to_stack(t_list *stack_a, int argc, char **argv);

//check functions
int		check_order(t_list *stack);
int		error_check(char *nbr);
int		error_dup_check(t_list *stack, int n);

//free functions
void	ft_free(t_list **lst);
void	free_errors(t_list *stack);
void	temp_free(char **temp);

//operation utils
void	push(t_list **stack, t_list **node);
void	swap(t_list **stack);
void	rotat(t_list **stack);
void	rev_rotat(t_list **stack);

//operations
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_b, t_list **stack_a);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

//sort_utils
t_list	*get_max(t_list *stack);
t_list	*get_min(t_list *stack);
void	init_nodes(t_list *stack_a, t_list *stack_b);
void	set_cheapest(t_list *b);
void	set_price(t_list *a, t_list *b);
void	set_current_position(t_list *stack);
void	set_target_node(t_list *a, t_list *b);

void	rotate_both(t_list **a, t_list **b, t_list *cheapest_node);
void	reverse_rotate_both(t_list **a, t_list **b, t_list *cheapest_node);
t_list	*return_cheapest(t_list *stack);
void	move_nodes(t_list **a, t_list **b);
void	finish_rotation(t_list **stack, t_list *top_node, char stack_name);

//sort_algo
void	sort_stack(t_list **stack_a, t_list **stack_b);
void	sort_three(t_list **stack_a);

#endif
