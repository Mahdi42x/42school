/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sprites.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:20:28 by mawada            #+#    #+#             */
/*   Updated: 2024/01/21 15:33:43 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	put_sprite_on_window(t_game *game, char sprite_char, int x, int y)
{
	if (sprite_char == '1')
		mlx_put_image_to_window(game->mlx_connection,
			game->mlx_win, game->sprite.wall, x * 64, y * 64);
	else if (sprite_char == 'C')
		mlx_put_image_to_window(game->mlx_connection,
			game->mlx_win, game->sprite.collectible, x * 64, y * 64);
	else if (sprite_char == 'E')
		mlx_put_image_to_window(game->mlx_connection,
			game->mlx_win, game->sprite.exits, x * 64, y * 64);
	else if (sprite_char == 'P')
		mlx_put_image_to_window(game->mlx_connection,
			game->mlx_win, game->sprite.player, x * 64, y * 64);
	else if (sprite_char == '0')
		mlx_put_image_to_window(game->mlx_connection,
			game->mlx_win, game->sprite.ground_tile, x * 64, y * 64);
}

void	sprites_line(t_game *game)
{
	game->y = 0;
	game->x = 0;
	while (game->y < game->height)
	{
		while (game->x < game->width)
		{
			put_sprite_on_window(game, game->layout[game->y][game->x],
				game->x, game->y);
			game->x++;
		}
		game->x = 0;
		game->y++;
	}
}

void	put_sprites(t_game *game)
{
	int	width;
	int	height;

	width = 0;
	height = 0;
	while (height < game->height)
	{
		width = 0;
		while (width < game->width)
		{
			sprites_line(game);
			width++;
		}
		height++;
	}
}

t_sprites	*init_sprites(void *mlx, t_game *game)
{
	t_image		img;

	game->sprite.ground_tile = mlx_xpm_file_to_image(mlx, "img/Wood.xpm",
			&img.img_width, &img.img_height);
	game->sprite.wall = mlx_xpm_file_to_image(mlx, "img/Wall.xpm",
			&img.img_width, &img.img_height);
	game->sprite.collectible = mlx_xpm_file_to_image(mlx, "img/Collectible.xpm",
			&img.img_width, &img.img_height);
	game->sprite.exits = mlx_xpm_file_to_image(mlx, "img/Exit.xpm",
			&img.img_width, &img.img_height);
	game->sprite.player = mlx_xpm_file_to_image(mlx, "img/Player.xpm",
			&img.img_width, &img.img_height);
	game->sprite.ecke = mlx_xpm_file_to_image(mlx, "img/ecke.xpm",
			&img.img_width, &img.img_height);
	game->sprite.ecke2 = mlx_xpm_file_to_image(mlx, "img/ecke2.xpm",
			&img.img_width, &img.img_height);
	if (game->sprite.ground_tile == NULL || game->sprite.wall == NULL 
		|| game->sprite.collectible == NULL
		|| game->sprite.exits == NULL || game->sprite.player == NULL
		|| game->sprite.ecke == NULL || game->sprite.ecke2 == NULL)
	{
		free_sprites(&game->sprite);
		return (NULL);
	}
	return (&game->sprite);
}
