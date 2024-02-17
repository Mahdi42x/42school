/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:58:49 by mawada            #+#    #+#             */
/*   Updated: 2024/01/29 16:18:48 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	print_decoded_message(int signum)
{
	static int				bit_index = 0;
	static unsigned char	received_char = 0;

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
		bit_index = 0;
		received_char = 0;
	}
}

int	main(void)
{
	struct sigaction	action;

	action.sa_handler = print_decoded_message;
	sigaction(SIGUSR1, &action, NULL);
	sigaction(SIGUSR2, &action, NULL);
	ft_printf("PID of server: %d\n", getpid());
	while (1)
	{
		pause();
	}
}
