/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:58:49 by mawada            #+#    #+#             */
/*   Updated: 2024/02/20 14:28:14 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	print_message(int signum, siginfo_t *info, void *ucontent)
{
	static int				bit_index = 0;
	static unsigned char	received_char = 0;

	(void)ucontent;
	if (signum == SIGUSR1)
		received_char |= (1 << bit_index);
	else if (signum == SIGUSR2)
		received_char |= (0 << bit_index);
	bit_index++;
	if (bit_index == 8)
	{
		if (received_char == 0)
			write(1, "\n", 1);
		ft_putchar_fd(received_char, 1);
		if (kill(info->si_pid, SIGUSR2) == -1)
			return ;
		bit_index = 0;
		received_char = 0;
	}
	if (kill(info->si_pid, SIGUSR1) == -1)
		return ;
}

void	config_signals(void)
{
	struct sigaction	action;

	action.sa_sigaction = &print_message;
	action.sa_flags = SA_SIGINFO;
	if (sigaction(SIGUSR1, &action, NULL) == -1)
		return ;
	if (sigaction(SIGUSR2, &action, NULL) == -1)
		return ;
}

int	main(void)
{
	ft_printf("PID of server: %d\n", getpid());
	while (1)
		config_signals();
	return (EXIT_SUCCESS);
}
