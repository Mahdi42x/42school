/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:04:00 by mawada            #+#    #+#             */
/*   Updated: 2024/03/28 16:34:35 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

int	write_error(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	write(2, "Error: ", 7);
	write(2, str, len);
	write(2, "\n", 1);
	return (1);
}

int	error_manager(int error)
{
	if (error == 1)
		return (write_error("At least one wrong argument"));
	if (error == 2)
		return (write_error("Fatal error when intializing mutex"));
	return (1);
}

// void	exit_on_death(t_rules *rules, t_philosopher *philos)
// {
// 	int	i;

// 	i = -1;
// 	while (++i < rules->nb_philo)
// 	{
// 		if (philos[i].rules->dieded != 1)
// 			pthread_cancel(philos[i].thread_id);
// 	}
// 	i = -1;
// 	while (++i < rules->nb_philo)
// 		pthread_mutex_destroy(&(rules->forks[i]));
// 	pthread_mutex_destroy(&(rules->writing));
// }

void	exit_on_death(t_rules *rules, t_philosopher *philos)
{
	int	i;

	i = -1;
	while (++i < rules->nb_philo)
	{
		if (philos[i].rules->dieded != 1 && philos[i].is_running == 1)
		{
			pthread_cancel(philos[i].thread_id);
			philos[i].is_running = 0;
		}
	}
	i = -1;
	while (++i < rules->nb_philo)
		pthread_mutex_destroy(&(rules->forks[i]));
	pthread_mutex_destroy(&(rules->writing));
}

void	death_checker_if_condition(t_rules *rules, int i, long long time, t_philosopher *philosopher)
{
	rules->dieded = 1;
	printf("Philosopher %d died after %lld milliseconds.\n",
		i, time);
	exit_on_death(rules, philosopher);
}
