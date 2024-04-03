/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launcher.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:36:43 by mawada            #+#    #+#             */
/*   Updated: 2024/04/03 17:09:19 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

//Die Funktion philo_eats lässt einen Philosophen essen.
void	philo_eats(t_philosopher *philosopher)
{
	t_rules	*rules;

	rules = philosopher->rules;
	pthread_mutex_lock(&(rules->forks[philosopher->left_fork_id]));
	action_print(rules, philosopher->id, "has taken a fork");
	pthread_mutex_lock(&(rules->forks[philosopher->right_fork_id]));
	action_print(rules, philosopher->id, "has taken a fork");
	pthread_mutex_lock(&(rules->meal_check));
	action_print(rules, philosopher->id, "is eating");
	philosopher->t_last_meal = timestamp();
	pthread_mutex_unlock(&(rules->meal_check));
	smart_sleep(rules->time_to_eat, rules);
	(philosopher->x_ate)++;
	pthread_mutex_unlock(&(rules->forks[philosopher->left_fork_id]));
	pthread_mutex_unlock(&(rules->forks[philosopher->right_fork_id]));
}

//simuliert das Leben eines Philosophen.
void	*p_thread(void *void_philosopher)
{
	int				i;
	t_philosopher	*philosopher;
	t_rules			*rules;

	i = 0;
	philosopher = (t_philosopher *)void_philosopher;
	rules = philosopher->rules;
	if (philosopher->id % 2)
		usleep(15000);
	while (!(rules->dieded))
	{
		philo_eats(philosopher);
		if (rules->all_ate)
			break ;
		action_print(rules, philosopher->id, "is sleeping");
		smart_sleep(rules->time_to_sleep, rules);
		action_print(rules, philosopher->id, "is thinking");
		i++;
	}
	return (NULL);
}

//freigeben der Mutex. (THREADS muessen in den Wartemodus gesetzt werden)
void	exit_launcher(t_rules *rules, t_philosopher *philos)
{
	int	i;

	i = -1;
	while (++i < rules->number_of_philosophers)
		pthread_join(philos[i].thread_id, NULL);
	i = -1;
	while (++i < rules->number_of_philosophers)
		pthread_mutex_destroy(&(rules->forks[i]));
	pthread_mutex_destroy(&(rules->writing));
}

//checkt, ob jemand gestorben ist.
void	death_checker(t_rules *rules, t_philosopher *philosopher)
{
	int			i;
	long long	time_since_last_meal;

	while (!(rules->all_ate))
	{
		i = -1;
		while (++i < rules->number_of_philosophers && !(rules->dieded))
		{
			pthread_mutex_lock(&(rules->meal_check));
			time_since_last_meal = time_diff(philosopher[i].t_last_meal,
					timestamp());
			if (time_since_last_meal > rules->time_to_die)
				if_con(rules, i, time_since_last_meal, philosopher);
			pthread_mutex_unlock(&(rules->meal_check));
			usleep(100);
		}
		if (rules->dieded)
			break ;
		i = 0;
		while (should_continue(rules, philosopher, i))
			i++;
		if (i == rules->number_of_philosophers)
			rules->all_ate = 1;
	}
}

int	launcher(t_rules *rules)
{
	int				i;
	t_philosopher	*philosopher;

	i = 0;
	philosopher = rules->philosophers;
	rules->first_timestamp = timestamp();
	while (i < rules->number_of_philosophers)
	{
		philosopher[i].is_running = 1;
		if (pthread_create(&(philosopher[i].thread_id),
				NULL, p_thread, &(philosopher[i])))
			return (1);
		philosopher[i].t_last_meal = timestamp();
		i++;
	}
	death_checker(rules, rules->philosophers);
	exit_launcher(rules, philosopher);
	return (0);
}
