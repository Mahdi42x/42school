/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:13:29 by mawada            #+#    #+#             */
/*   Updated: 2024/01/25 17:25:41 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_move	*initialize_move(t_game	*game)
{
	t_move	*move;

	move = allocate_move(game);
	set_original_positions(move, game);
	mlx_put_image_to_window(game->mlx_connection, game->mlx_win,
		game->sprite.ground_tile, move->original_x * 64, move->original_y * 64);
	return (move);
}

t_move	*allocate_move(t_game *game)
{
	t_move	*move;

	move = (t_move *)malloc(sizeof(t_move));
	check_memory_allocation(move);
	move->game = game;
	return (move);
}

void	set_original_positions(t_move *move, t_game *game)
{
	move->original_x = game->player_x;
	move->original_y = game->player_y;
	move->yplus = game->layout[game->player_y + 1][game->player_x];
	move->xplus = game->layout[game->player_y][game->player_x + 1];
	move->yminus = game->layout[game->player_y - 1][game->player_x];
	move->xminus = game->layout[game->player_y][game->player_x - 1];
}

void	update_player_position(t_game *game, int new_x, int new_y)
{
	if (game->player_x == game->exit_x && game->player_y == game->exit_y)
	{
		mlx_put_image_to_window(game->mlx_connection, game->mlx_win,
			game->sprite.exits, game->player_x * 64, game->player_y * 64);
	}
	if (new_x == game->exit_x && new_y == game->exit_y)
	{
		mlx_put_image_to_window(game->mlx_connection, game->mlx_win,
			game->sprite.player, new_x * 64, new_y * 64);
	}
	game->player_x = new_x;
	game->player_y = new_y;
	mlx_put_image_to_window(game->mlx_connection, game->mlx_win,
		game->sprite.player, game->player_x * 64, game->player_y * 64);
}

void	collect_collectible(t_game *game)
{
	game->layout[game->player_y][game->player_x] = '0';
	game->remaining_collectibles--;
	ft_printf("Collectibles: %d\n", game->remaining_collectibles);
}
