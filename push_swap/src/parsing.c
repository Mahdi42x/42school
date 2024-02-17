/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:26:20 by mawada            #+#    #+#             */
/*   Updated: 2024/02/15 16:31:19 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//ist dafür verantwortlich, die Eingabe zu analysieren 
//und aus einem einzelnen übergebenen Argument 
//einen Stapel von Zahlen zu erstellen.
t_list	*parse_string_input_to_stack(char **argv, t_list *stack_a)
{
	t_list	*new;
	char	**temp;
	int		i;

	i = 0;
	temp = argv;
	temp = ft_split(argv[1], ' ');
	while (temp[i])
	{
		if (error_check(temp[i]))
			free_errors(stack_a);
		if (error_dup_check(stack_a, ft_atoi(temp[i])))
		{
			temp_free(temp);
			free_errors(stack_a);
		}
		new = ft_lstnew(ft_atoi(temp[i]));
		ft_lstadd_back(&stack_a, new);
		i++;
	}
	temp_free(temp);
	return (stack_a);
}

//füllt den Stapel stack_a mit den Zahlen, die als Argumente übergeben wurden.
t_list	*parse_arguments_to_stack(t_list *stack_a, int argc, char **argv)
{
	t_list	*new;
	int		i;

	i = 1;
	if (argc >= 2)
	{
		new = NULL;
		while (argv[i])
		{
			if (error_check(argv[i]))
				free_errors(stack_a);
			if (error_dup_check(stack_a, ft_atoi(argv[i])))
				free_errors(stack_a);
			new = ft_lstnew(ft_atoi(argv[i]));
			ft_lstadd_back(&stack_a, new);
			i++;
		}
	}
	return (stack_a);
}
