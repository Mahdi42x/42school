/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:20:49 by mawada            #+#    #+#             */
/*   Updated: 2023/08/27 15:33:40 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void line(int x, int a, char b, char c)
{
	int i;

	i = 0;
	if (x >= 1)
	{
		ft_putchar(a);
	}
	while (i < (x -2))
	{
		ft_putchar(b);
		i++;
	}

	if (x >= 2)
	{
		ft_putchar(c);
		ft_putchar('\n');
	}
}

void rush(int x, int y)
{
	int i;

	i = 0;
	if (x >= 1 && y >= 1)
	{
		line(x,'/', '*','\\');
	}
	while (i < y - 2 && x >= 1)
	{
		line(x,'*',' ','*');
		i++;
	}
	if ( x >= 1 && y >= 2)
	{
		line(x,'\\','*','/');
	}
}
