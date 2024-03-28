/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:17:46 by mawada            #+#    #+#             */
/*   Updated: 2024/03/28 16:46:47 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <sys/time.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <signal.h>
# include <pthread.h>

struct	s_rules;

typedef struct s_philosopher
{
	int					id;
	int					x_ate;
	int					left_fork_id;
	int					right_fork_id;
	int					is_running; 
	long long			t_last_meal;
	struct s_rules		*rules;
	pthread_t			thread_id;
}						t_philosopher;

typedef struct s_rules
{
	int					nb_philo;
	int					time_death;
	int					time_eat;
	int					time_sleep;
	int					nb_eat;
	int					dieded;
	int					all_ate;
	long long			first_timestamp;
	pthread_mutex_t		meal_check;
	pthread_mutex_t		forks[250];
	pthread_mutex_t		writing;
	t_philosopher		philosophers[250];
}						t_rules;

// ----- error_manager.c -----
int			write_error(char *str);
int			error_manager(int error);
void		death_checker_if_condition(t_rules *rules, int i, long long time, t_philosopher *philosopher);

//----- init.c -----
int			init_all(t_rules *rules, char **argv);
int			init_mutex(t_rules *rules);
int			init_philosophers(t_rules *rules);

//----- utils.c -----
int			ft_atoi(const char *str);
void		action_print(t_rules *rules, int id, char *string);
long long	timestamp(void);
long long	time_diff(long long past, long long pres);
void		smart_sleep(long long time, t_rules *rules);

//----- launcher.c -----
int			launcher(t_rules *rules);
void		philo_eats(t_philosopher *philosopher);
void		exit_launcher(t_rules *rules, t_philosopher *philos);
void		exit_on_death(t_rules *rules, t_philosopher *philos);

#endif
