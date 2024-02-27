/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:57:53 by mawada            #+#    #+#             */
/*   Updated: 2024/02/26 13:00:21 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	send_message(pid_t pid, char *message)
{
	int	i;
	int	j;

	i = 0;
	while (message[i] != '\0')
	{
		j = 0;
		while (j < 8)
		{
			if (message[i] & (1 << j))
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(100);
			j++;
		}
		i++;
	}
	i = 8;
	while (i--)
	{
		kill(pid, SIGUSR2);
		usleep(100);
	}
}

void	sig_handler(int signum)
{
	(void)signum;
}

void	config_signals(void)
{
	struct sigaction	sa_newsig;

	sa_newsig.sa_handler = &sig_handler;
	sa_newsig.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &sa_newsig, NULL) == -1)
		return ;
	if (sigaction(SIGUSR2, &sa_newsig, NULL) == -1)
		return ;
}

int	main(int argc, char **argv)
{
	pid_t		pid;

	if (argc != 3)
	{
		ft_printf("Input Variables have an issue");
		return (1);
	}
	pid = ft_atoi(argv[1]);
	config_signals();
	send_message(pid, argv[2]);
	if (argc)
		return (EXIT_SUCCESS);
}
