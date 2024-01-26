/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:57:15 by mawada            #+#    #+#             */
/*   Updated: 2024/01/26 11:28:52 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	free_sprites(t_sprites *sprites)
{
	t_game	*game;

	game = (t_game *)malloc(sizeof(t_game));
	check_memory_allocation(game);
	ft_printf("Fehler beim Laden der Bilder.\n");
	mlx_destroy_image(game->mlx_connection, sprites->ground_tile);
	mlx_destroy_image(game->mlx_connection, sprites->wall);
	mlx_destroy_image(game->mlx_connection, sprites->collectible);
	mlx_destroy_image(game->mlx_connection, sprites->exits);
	mlx_destroy_image(game->mlx_connection, sprites->player);
	mlx_destroy_image(game->mlx_connection, sprites->ecke);
	mlx_destroy_image(game->mlx_connection, sprites->ecke2);
	free(sprites);
	mlx_destroy_window(game->mlx_connection, game->mlx_win);
	mlx_destroy_display(game->mlx_connection);
}

void	free_invalid_path(t_game *game)
{
	free_array(&game->layout, game->height);
	free_copied_layout(&game->layout_copy, game->height);
	free(game);
	exit(EXIT_FAILURE);
}

void	free_exit(t_game *game)
{
	if (game == NULL)
	{
		ft_printf("Fehler beim exit.\n");
		return ;
	}
	mlx_destroy_image(game->mlx_connection, game->sprite.ground_tile);
	mlx_destroy_image(game->mlx_connection, game->sprite.wall);
	mlx_destroy_image(game->mlx_connection, game->sprite.collectible);
	mlx_destroy_image(game->mlx_connection, game->sprite.exits);
	mlx_destroy_image(game->mlx_connection, game->sprite.player);
	mlx_destroy_image(game->mlx_connection, game->sprite.ecke);
	mlx_destroy_image(game->mlx_connection, game->sprite.ecke2);
	if (game->mlx_win != NULL)
		mlx_destroy_window(game->mlx_connection, game->mlx_win);
	if (game->mlx_connection != NULL) 
		mlx_destroy_display(game->mlx_connection);
	free(game->mlx_connection);
	free_array(&game->layout, game->height);
	free(game);
}

void	free_array(char ***arr, int lines)
{
	int	i;

	i = 0;
	if (arr == NULL || *arr == NULL)
		return ;
	while (i < lines && (*arr)[i] != NULL)
	{
		free((*arr)[i]);
		(*arr)[i] = NULL;
		i++;
	}
	free(*arr);
	*arr = NULL;
}

void	free_copied_layout(char ***arr, int lines)
{
	int	i;

	i = 0;
	while (i < lines && (*arr)[i] != NULL)
	{
		free((*arr)[i]);
		(*arr)[i] = NULL;
		i++;
	}
	free(*arr);
	*arr = NULL;
}
