/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:25:45 by mawada            #+#    #+#             */
/*   Updated: 2023/08/26 11:18:33 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	short	n;

	n = 47;
	while (++n < 58)
		write(1, &n, 1);
}

/*int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
}*/
