/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:29:29 by mawada            #+#    #+#             */
/*   Updated: 2023/08/27 12:16:57 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void new_line(char x, char a, char b, char c)
{
	int i;

	i = 0;
	if (x >= 1)
		ft_putchar(a);
	while (i < (x - 2))
{
	ft_putchar(b);
	i++;
}
	if (x >= 2)
		ft_putchar(c);
		ft_putchar('\n');
}

void rush(int x, int y)
{
	int i;

	i = 0;
	if (x >= 1 && y > 1)
		new_line(x, '/', '*', '\\');
	while (i < y - 2 && x >= 1)
{
	new_line(x, '*', ' ', '*');
	i++;
}
	if (x >= 1 && y >= 2)
{
		new_line(x, '\\', '*', '/');
}
}

int main(void)
{
	rush(1,1);
	return(0);
}
