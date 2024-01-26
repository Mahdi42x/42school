/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:16:49 by mawada            #+#    #+#             */
/*   Updated: 2024/01/21 11:16:59 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	close_window(t_game *game)
{
	ft_printf("Bye!\n");
	free_exit(game);
	exit(EXIT_SUCCESS);
	return (0);
}

int	handle_key(int keycode, t_game *game)
{
	if (keycode == 53 || keycode == 27 || keycode == 9 || keycode == 65307)
		close_window(game);
	move_player(keycode, game);
	return (0);
}

void	won(t_game *game)
{
	if (game->layout[game->player_y][game->player_x] == 'E')
	{
		ft_printf("nice, you did it!\n");
		free(game->steps_str);
		free(game->remaining_str);
		free_exit(game);
		exit(EXIT_SUCCESS);
	}
}

void	open_window(t_game *game)
{
	game->mlx_connection = mlx_init();
	game->mlx_win = mlx_new_window(game->mlx_connection,
			game->width * 64, game->height * 64, "SO_LONG");
	game->sprite = *init_sprites(game->mlx_connection, game);
	mlx_put_image_to_window(game->mlx_connection, game->mlx_win,
		game->sprite.player, game->player_x * 64, game->player_y * 64);
	put_sprites(game);
	mlx_loop_hook(game->mlx_connection, (int (*)(void *))display_string, game);
	mlx_hook(game->mlx_win, 2, 1L << 0, handle_key, game);
	mlx_hook(game->mlx_win, 17, 0, close_window, game);
	mlx_loop(game->mlx_connection);
}
