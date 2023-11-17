/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:29:51 by mawada            #+#    #+#             */
/*   Updated: 2023/08/26 10:39:00 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char c;
	c = 'z';

	while (c >= 'a')
{
	write (1, &c, 1);
	--c;
}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}

