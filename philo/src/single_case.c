/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_case.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:08:18 by mawada            #+#    #+#             */
/*   Updated: 2024/04/03 17:14:27 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

int	launcher_single(t_rules *rules, t_philosopher *philosopher)
{
	long long	time_since_last_meal;

	rules->first_timestamp = timestamp();
	philosopher->t_last_meal = timestamp();
	action_print(rules, philosopher->id, "has taken a fork");
	sleep(1);
	time_since_last_meal = time_diff(philosopher[0].t_last_meal, timestamp());
	rules->dieded = 1;
	printf("Philosopher 0 died after %d milliseconds.\n",
		rules->time_to_die + 1);
	return (0);
}

//another function to avoid norminette errors :(
int	should_continue(t_rules *rules, t_philosopher *philosopher, int i)
{
	return (rules->number_of_times_each_philosopher_must_eat != -1 
		&& i < rules->number_of_philosophers
		&& philosopher[i].x_ate >= 
		rules->number_of_times_each_philosopher_must_eat);
}
