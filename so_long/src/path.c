/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:24:30 by mawada            #+#    #+#             */
/*   Updated: 2024/01/25 17:28:38 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	possible_or_not(t_game *game, int x, int y)
{
	if (game->layout_copy[y][x] != '1'
		&& game->layout_copy[y][x] != 'X'
		&& game->layout_copy[y][x] != 'F')
		return (1);
	return (0);
}

int	check_exit_coordinate(t_game *game, int x, int y)
{
	if (x == game->exit_x && y == game->exit_y)
		return (1);
	return (0);
}

int	find_exit(t_game *game, int x, int y)
{
	if (check_exit_coordinate(game, x, y) == 1)
		return (1);
	if (game->layout_copy[y][x] != '1' && game->layout_copy[y][x] != 'C'
		&& game->layout_copy[y][x] != 'F')
		game->layout_copy[y][x] = 'C';
	if (game->layout_copy[y][x + 1] != '1' && game->layout_copy[y][x + 1]
		!= 'C' && game->layout_copy[y][x] != 'F' 
		&& find_exit(game, x + 1, y) == 1)
		return (1);
	if (game->layout_copy[y][x - 1] != '1' && game->layout_copy[y][x - 1]
		!= 'C' && game->layout_copy[y][x] != 'F' 
		&& find_exit(game, x - 1, y) == 1)
		return (1);
	if (game->layout_copy[y + 1][x] != '1' 
	&& game->layout_copy[y + 1][x]
		!= 'C' && game->layout_copy[y][x] != 'F' 
		&& find_exit(game, x, y + 1) == 1)
		return (1);
	if (game->layout_copy[y - 1][x] != '1' 
	&& game->layout_copy[y - 1][x]
		!= 'C' && game->layout_copy[y][x] != 'F' 
		&& find_exit(game, x, y - 1) == 1)
		return (1);
	return (0);
}

void	check_collectible_coordinate(t_game *game, int x, int y)
{
	if (game->layout_copy[y][x] == 'C')
		game->coll_copy -= 1;
}

int	find_all_collectibles(t_game *game, int x, int y)
{
	if (possible_or_not(game, x, y) == 1)
		game->layout_copy[y][x] = 'X';
	if (possible_or_not(game, x + 1, y) == 1)
	{
		check_collectible_coordinate(game, x + 1, y);
		find_all_collectibles(game, x + 1, y);
	}
	if (possible_or_not(game, x - 1, y) == 1)
	{
		check_collectible_coordinate(game, x - 1, y);
		find_all_collectibles(game, x - 1, y);
	}
	if (possible_or_not(game, x, y + 1) == 1)
	{
		check_collectible_coordinate(game, x, y + 1);
		find_all_collectibles(game, x, y + 1);
	}
	if (possible_or_not(game, x, y - 1) == 1)
	{
		check_collectible_coordinate(game, x, y - 1);
		find_all_collectibles(game, x, y - 1);
	}
	return (0);
}
