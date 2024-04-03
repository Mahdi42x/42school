/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:17:37 by mawada            #+#    #+#             */
/*   Updated: 2024/04/03 16:55:54 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	print_rules(const t_rules *rules)
{
	printf("number_of_philosophers: %d\n", rules->number_of_philosophers);
	printf("time_to_die: %d\n", rules->time_to_die);
	printf("time_to_eat: %d\n", rules->time_to_eat);
	printf("time_to_sleep: %d\n", rules->time_to_sleep);
	printf("all_ate: %d\n", rules->all_ate);
	printf("dieded: %d\n", rules->dieded);
	printf("number_eat: %d\n", rules->number_of_times_each_philosopher_must_eat);
	printf("\n");
}

void	print_philosophers(t_rules *rules, int num_philosophers)
{
	int	i;

	i = 0;
	while (i < num_philosophers)
	{
		printf("Philosopher %d:\n", rules->philosophers[i].id);
		printf("id: %d\n", rules->philosophers[i].id);
		printf("x_ate: %d\n", rules->philosophers[i].x_ate);
		printf("left_fork_id: %d\n", rules->philosophers[i].left_fork_id);
		printf("right_fork_id: %d\n", rules->philosophers[i].right_fork_id);
		printf("t_last_meal: %lld\n", rules->philosophers[i].t_last_meal);
		printf("rules: %p\n", (void *)rules->philosophers[i].rules);
		printf("thread_id: %lu\n", (unsigned long)
			rules->philosophers[i].thread_id);
		printf("\n");
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_rules	rules;
	int		return_;

	if (argc != 5 && argc != 6)
		return (write_error("Wrong amount of arguments"));
	return_ = init_all(&rules, argv);
	if (return_)
		return (error_manager(return_));
	if (rules.number_of_philosophers == 1)
		return (launcher_single(&rules, &rules.philosophers[0]));
	if (launcher(&rules))
		return (write_error("There was an error creating the threads"));
	return (0);
}

/*
	// printf("Data before initialization:\n");
	// print_rules(&rules);
	// print_philosophers(&rules, rules.number_of_philosophers);

	// printf("Data after initialization:\n");
	// print_rules(&rules);
	// print_philosophers(&rules, rules.number_of_philosophers);
*/
