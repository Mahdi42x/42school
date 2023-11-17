/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 02:01:34 by ybayart           #+#    #+#             */
/*   Updated: 2019/08/11 22:56:24 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		g_end;

void	lock(int ***table, int **bord, int size);
int		check_valid(int ***table, int size);
void	ft_rush01_aff(int ***table, int size);
void	ft_putstr(char *str);

int		ft_rush01_test(int ***table, int *coord, int c)
{
	int		i;
	int		x;
	int		y;

	x = coord[0];
	y = coord[1];
	i = -1;
	if (table[1][x][y] == c)
		return (1);
	else if (table[1][x][y] != 0)
		return (0);
	while (++i < x)
	{
		if (table[0][i][y] == c)
		{
			return (0);
		}
	}
	if (table[0][x][y] != 0)
		return (0);
	return (1);
}

void	ft_rush01_clear(int ***table, int pos, int c, int size)
{
	int		i;

	i = -1;
	while (++i < size)
		if (table[0][pos][i] == c)
			table[0][pos][i] = 0;
}

void	ft_rush01_fill(int ***table, int c, int pos, int size)
{
	int		i;
	int		coord[2];

	if (pos == size && c == size)
		g_end = check_valid(table, size);
	else if (pos == size)
		ft_rush01_fill(table, c + 1, 0, size);
	else if (g_end == 0)
	{
		i = -1;
		while (++i < size)
		{
			coord[0] = pos;
			coord[1] = i;
			if (ft_rush01_test(table, coord, c))
			{
				table[0][pos][i] = c;
				ft_rush01_fill(table, c, pos + 1, size);
			}
			ft_rush01_clear(table, pos, c, size);
		}
		if (g_end == 0 && c == 1 && i == size && pos == 0)
			ft_putstr("Error\n");
	}
}

void	gen(int **locked, int size)
{
	int		i;
	int		j;
	int		k;
	int		c;
	int		***table;

	i = -1;
	table = malloc(sizeof(int**) * 3);
	while (++i < 2)
	{
		j = -1;
		table[i] = malloc(sizeof(int*) * size);
		while (++j < size)
		{
			k = -1;
			table[i][j] = malloc(sizeof(int) * size);
			while (++k < size)
				table[i][j][k] = 0;
		}
	}
	g_end = 0;
	lock(table, locked, size);
	c = 1;
	ft_rush01_fill(table, c, 0, size);
}
