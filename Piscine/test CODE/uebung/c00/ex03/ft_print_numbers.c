/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:40:58 by mawada            #+#    #+#             */
/*   Updated: 2023/08/26 10:44:33 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char c;
	c = '1';

	while (c <= '9')
	{
		write (1, &c, 1);
			c++;
	}
}

int	main(void)
{
	ft_print_numbers();
}
