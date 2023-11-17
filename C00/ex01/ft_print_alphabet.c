/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 17:58:10 by mawada            #+#    #+#             */
/*   Updated: 2023/08/26 11:15:59 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c < 123)
	{
		write(1, &c, 1);
		++c;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
	return (0);
}*/
