/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 10:06:44 by mawada            #+#    #+#             */
/*   Updated: 2023/08/27 10:56:37 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_line(int x, int a, int b, int c)
{
	int i;

	i = 0;
	if (x >= 1)
		ft_putchar(a);
	while(i < (x - 2))
        {
		ft_putchar(b);
		i++;
	}
	if (x >= 2)
		ft_putchar(c);
		write(1, "\n", 1);
		}

void rush(int x, int y)
{
	int i;

	i = 0;
	if (x >= 1 && y >= 1)
		ft_line(x, '/', '*', '\\');
	while(i < y - 2 && x >= 1)
	{
		ft_line(x, '*', ' ', '*');
		i++;
		}
	if (x >= 1 && y >= 2)
		ft_line(x, '\\', '*', '/');
	}

int main(void)
{
	rush(5,3);
	return(0);
}
