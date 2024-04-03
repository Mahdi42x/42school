/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:17:11 by mawada            #+#    #+#             */
/*   Updated: 2024/04/03 16:56:50 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

int	init_mutex(t_rules *rules)
{
	int	i;

	i = rules->number_of_philosophers;
	while (--i >= 0)
	{
		if (pthread_mutex_init(&(rules->forks[i]), NULL))
			return (1);
	}
	if (pthread_mutex_init(&(rules->writing), NULL))
		return (1);
	if (pthread_mutex_init(&(rules->meal_check), NULL))
		return (1);
	return (0);
}

int	init_philosophers(t_rules *rules)
{
	int	i;

	rules->all_ate = 0;
	rules->dieded = 0;
	i = rules->number_of_philosophers;
	while (--i >= 0)
	{
		rules->philosophers[i].id = i;
		rules->philosophers[i].x_ate = 0;
		rules->philosophers[i].left_fork_id = i;
		rules->philosophers[i].right_fork_id = (i + 1) 
			% rules->number_of_philosophers;
		rules->philosophers[i].t_last_meal = 0;
		rules->philosophers[i].rules = rules;
	}
	return (0);
}

int	init_all(t_rules *rules, char **argv)
{
	rules->number_of_philosophers = ft_atoi(argv[1]);
	rules->time_to_die = ft_atoi(argv[2]);
	rules->time_to_eat = ft_atoi(argv[3]);
	rules->time_to_sleep = ft_atoi(argv[4]);
	rules->all_ate = 0;
	rules->dieded = 0;
	if (rules->number_of_philosophers < 1 || rules->time_to_die < 0
		|| rules->time_to_eat < 0
		|| rules->time_to_sleep < 0 || rules->number_of_philosophers > 250)
		return (1);
	if (argv[5])
	{
		rules->number_of_times_each_philosopher_must_eat = ft_atoi(argv[5]);
		if (rules->number_of_times_each_philosopher_must_eat <= 0)
			return (1);
	}
	else
		rules->number_of_times_each_philosopher_must_eat = -1;
	if (init_mutex(rules))
		return (2);
	init_philosophers(rules);
	return (0);
}
