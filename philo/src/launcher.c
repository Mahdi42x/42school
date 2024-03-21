/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launcher.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:36:43 by mawada            #+#    #+#             */
/*   Updated: 2024/03/21 16:32:48 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

void	philo_eats(t_philosopher *philosopher)
{
	t_rules *rules;

	rules = philosopher->rules;
	pthread_mutex_lock(&(rules->forks[philosopher->left_fork_id]));
	action_print(rules, philosopher->id, "has taken a fork");
	pthread_mutex_lock(&(rules->forks[philosopher->right_fork_id]));
	action_print(rules, philosopher->id, "has taken a fork");
	pthread_mutex_lock(&(rules->meal_check));
	action_print(rules, philosopher->id, "is eating");
	philosopher->t_last_meal = timestamp();
	pthread_mutex_unlock(&(rules->meal_check));
	smart_sleep(rules->time_eat, rules);
	(philosopher->x_ate)++;
	pthread_mutex_unlock(&(rules->forks[philosopher->left_fork_id]));
	pthread_mutex_unlock(&(rules->forks[philosopher->right_fork_id]));
}

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
		smart_sleep(rules->time_sleep, rules);
		action_print(rules, philosopher->id, "is thinking");
		i++;
	}
	return (NULL);
}

void	exit_launcher(t_rules *rules, t_philosopher *philos)
{
	int i;

	i = -1;
	while (++i < rules->nb_philo)
		pthread_join(philos[i].thread_id, NULL);
	i = -1;
	while (++i < rules->nb_philo)
		pthread_mutex_destroy(&(rules->forks[i]));
	pthread_mutex_destroy(&(rules->writing));
}

void death_checker(t_rules *rules, t_philosopher *philosopher) {
    int i;

    while (!(rules->all_ate)) {
        i = -1;
        while (++i < rules->nb_philo && !(rules->dieded)) {
            pthread_mutex_lock(&(rules->meal_check));
            long long time_since_last_meal = time_diff(philosopher[i].t_last_meal, timestamp());
            if (time_since_last_meal > rules->time_death)
			{
                // Der Philosoph ist gestorben
                // Hier könnten weitere Aktionen ausgeführt werden, wie das Setzen von Flags, Drucken von Nachrichten usw.
                rules->dieded = 1;
                printf("Philosopher %d died after %lld milliseconds of starvation.\n", i, time_since_last_meal);
				exit(0);
            }
            pthread_mutex_unlock(&(rules->meal_check));
            usleep(100); // Eine kurze Pause, um die CPU-Last zu reduzieren
        }
        if (rules->dieded) {
            // Ein Philosoph ist gestorben, also beende die Überprüfung
            break;
        }
        // Überprüfe, ob alle Philosophen die vorgeschriebene Anzahl an Mahlzeiten gegessen haben
        i = 0;
        while (rules->nb_eat != -1 && i < rules->nb_philo && philosopher[i].x_ate >= rules->nb_eat) {
            i++;
        }
        if (i == rules->nb_philo) {
            // Alle Philosophen haben die vorgeschriebene Anzahl an Mahlzeiten gegessen
            rules->all_ate = 1;
        }
    }
}

int		launcher(t_rules *rules)
{
	int				i;
	t_philosopher	*philosopher;

	i = 0;
	philosopher = rules->philosophers;
	rules->first_timestamp = timestamp();
	while (i < rules->nb_philo)
	{
		if (pthread_create(&(philosopher[i].thread_id), NULL, p_thread, &(philosopher[i])))
			return (1);
		philosopher[i].t_last_meal = timestamp();
		i++;
	}
	death_checker(rules, rules->philosophers);
	exit_launcher(rules, philosopher);
	return (0);
}