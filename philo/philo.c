/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:17:37 by mawada            #+#    #+#             */
/*   Updated: 2024/03/21 16:25:57 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	print_rules(const t_rules *rules)
{
	printf("nb_philo: %d\n", rules->nb_philo);
	printf("time_death: %d\n", rules->time_death);
	printf("time_eat: %d\n", rules->time_eat);
	printf("time_sleep: %d\n", rules->time_sleep);
	printf("all_ate: %d\n", rules->all_ate);
	printf("dieded: %d\n", rules->dieded);
	printf("nb_eat: %d\n", rules->nb_eat);
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
		printf("thread_id: %lu\n", (unsigned long)rules->philosophers[i].thread_id);
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
	// printf("Daten vor der Initialisierung:\n");
	// print_rules(&rules);
	// print_philosophers(&rules, rules.nb_philo);
	if ((return_ = init_all(&rules, argv)))
		return (error_manager(return_));
	// printf("Daten nach der Initialisierung:\n");
	// print_rules(&rules);
	// print_philosophers(&rules, rules.nb_philo);
	if (launcher(&rules))
		return (write_error("There was an error creating the threads"));
	return (0);
}
