/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:34:54 by mawada            #+#    #+#             */
/*   Updated: 2024/04/03 16:53:08 by mawada           ###   ########.fr       */
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

void	exit_on_death(t_rules *rules, t_philosopher *philos)
{
	int	i;

	i = -1;
	while (++i < rules->number_of_philosophers)
	{
		if (philos[i].rules->dieded != 1 && philos[i].is_running == 1)
		{
			pthread_cancel(philos[i].thread_id);
			philos[i].is_running = 0;
			pthread_join(philos[i].thread_id, NULL);
		}
	}
	i = -1;
	while (++i < rules->number_of_philosophers)
		pthread_mutex_destroy(&(rules->forks[i]));
	pthread_mutex_destroy(&(rules->writing));
}

void	if_con(t_rules *rules, int i, long long time, t_philosopher *philo)
{
	rules->dieded = 1;
	printf("Philosopher %d died after %lld milliseconds.\n",
		i, time);
	exit_on_death(rules, philo);
}
