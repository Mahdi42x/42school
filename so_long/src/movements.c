/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:26:24 by mawada            #+#    #+#             */
/*   Updated: 2024/01/24 15:10:48 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	reset_player_position(t_game *game, t_move *move)
{
	game->player_x = move->original_x;
	game->player_y = move->original_y;
	mlx_put_image_to_window(game->mlx_connection, game->mlx_win,
		game->sprite.player, game->player_x * 64,
		game->player_y * 64);
}

bool	is_valid_move(t_game *game, int keycode)
{
	if (keycode == 119 || keycode == 126 || keycode == 65362)
	{
		return (game->player_y > 0 && game->layout[game->player_y - 1]
			[game->player_x] != '1');
	}
	else if (keycode == 97 || keycode == 123 || keycode == 65361)
	{
		return (game->player_x > 0 && game->layout[game->player_y]
			[game->player_x - 1] != '1');
	}
	else if (keycode == 115 || keycode == 125 || keycode == 65364)
	{
		return (game->player_y < game->height - 1 && game->layout
			[game->player_y + 1][game->player_x] != '1');
	}
	else if (keycode == 100 || keycode == 124 || keycode == 65363)
	{
		return (game->player_x < game->width - 1 && game->layout[game->player_y]
			[game->player_x + 1] != '1');
	}
	return (false);
}

void	handle_valid_move(t_game *game, int keycode)
{
	if (keycode == 119 || keycode == 126 || keycode == 65362)
	{
		update_player_position(game, game->player_x, game->player_y - 1);
	}
	else if (keycode == 97 || keycode == 123 || keycode == 65361)
	{
		update_player_position(game, game->player_x - 1, game->player_y);
	}
	else if (keycode == 115 || keycode == 125 || keycode == 65364)
	{
		update_player_position(game, game->player_x, game->player_y + 1);
	}
	else if (keycode == 100 || keycode == 124 || keycode == 65363)
	{
		update_player_position(game, game->player_x + 1, game->player_y);
	}
	if (game->layout[game->player_y][game->player_x] == 'C')
	{
		collect_collectible(game);
	}
	game->steps++;
	ft_printf("Steps: %d\n", game->steps);
}

void	move_player(int keycode, t_game *game)
{
	t_move	*move;
	bool	valid_key;

	move = initialize_move(game);
	valid_key = is_valid_move(game, keycode);
	if (valid_key)
	{
		handle_valid_move(game, keycode);
	}
	else
	{
		reset_player_position(game, move);
	}
	free(move);
}

int	display_string(t_game *game)
{
	game->steps_str = ft_itoa(game->steps);
	game->remaining_str = ft_itoa(game->remaining_collectibles);
	check_memory_allocation_return1(game);
	if (game->remaining_collectibles == 0)
		won(game);
	check_memory_allocation_return1(game->sprite.ecke);
	check_memory_allocation_return1(game->sprite.ecke2);
	mlx_put_image_to_window(game->mlx_connection, game->mlx_win,
		game->sprite.ecke, 0 * 0, 0 * 0);
	mlx_put_image_to_window(game->mlx_connection, game->mlx_win,
		game->sprite.ecke2, 1 * 64, 0 * 64);
	mlx_string_put(game->mlx_connection, game->mlx_win, 58, 42,
		0xFFFFFFFF, game->steps_str);
	mlx_string_put(game->mlx_connection, game->mlx_win, 58, 14,
		0xFFFFFFFF, game->remaining_str);
	free(game->steps_str);
	free(game->remaining_str);
	return (0);
}
