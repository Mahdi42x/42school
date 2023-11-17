/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:32:52 by mawada            #+#    #+#             */
/*   Updated: 2023/08/25 12:45:53 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	while (*str != '\0')
	{
	write(1, &str, 1);
	str++;
	}
}

int	main(int argc, char **argv[])
{
	ft_putchar(**argv[1]);
	ft_putchar(**argv[3]);
}
