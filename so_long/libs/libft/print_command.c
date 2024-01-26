/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_command.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 12:10:10 by mawada            #+#    #+#             */
/*   Updated: 2023/11/26 15:14:58 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_char(int c)
{
	return (write(1, &c, 1));
}

int	print_str(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
	{
		print_str("(null)");
		return (6);
	}
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	print_digit(long nbr, int base, int yesoryes)
{
	int		count;
	char	*symbols;

	if (yesoryes == 1)
		symbols = "0123456789ABCDEF";
	else
		symbols = "0123456789abcdef";
	if (nbr < 0)
	{
		write(1, "-", 1);
		return (print_digit(-nbr, base, yesoryes) + 1);
	}
	else if (nbr < base)
		return (print_char(symbols[nbr]));
	else
	{
		count = print_digit(nbr / base, base, yesoryes);
		return (count + print_digit(nbr % base, base, yesoryes));
	}
}

int	print_unsigned(unsigned int num)
{
	return (print_digit((long)num, 10, 0));
}
