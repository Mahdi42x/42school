/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:48:03 by mawada            #+#    #+#             */
/*   Updated: 2023/08/27 16:05:58 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_line(int x, int a, int b, int c)
{
	int	i;

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

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (y >= 1 && x >= 1)
		ft_line(x, '/', '*', '\\');
	while (i < y - 2 && x >= 1)
	{
		ft_line(x, '*', ' ', '*');
		i++;
	}
	if (y >= 2 && x >= 1)
	{
		ft_line(x, '\\', '*', '/');
	}
}
