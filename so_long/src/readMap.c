/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readMap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:46:14 by mawada            #+#    #+#             */
/*   Updated: 2024/01/26 14:58:42 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	readwholetext(t_game *game, char *argv)
{
	int		i;
	char	*player_position;

	i = 0;
	game->fd = open(argv, O_RDONLY);
	game->layout = (char **)malloc(game->height * sizeof(char *));
	while (i < game->height)
	{
		game->layout[i] = get_next_line(game->fd);
		player_position = ft_strchr(game->layout[i], 'P');
		game->collectible_position = ft_strchr(game->layout[i], 'C');
		if (player_position != NULL)
		{
			game->player_x = player_position - game->layout[i];
			game->player_y = i;
		}
		while (game->collectible_position != NULL)
		{
			game->remaining_collectibles++;
			game->collectible_position = ft_strchr
				(game->collectible_position + 1, 'C');
		}
		i++;
	}
	close(game->fd);
}

void	readwholetext_forcopy(t_game *game, char *argv)
{
	int		i;
	char	*player_position;
	char	*exit_position;

	i = 0;
	game->fd = open(argv, O_RDONLY);
	game->layout_copy = (char **)malloc(game->height * sizeof(char *));
	while (i < game->height)
	{
		game->layout_copy[i] = get_next_line(game->fd);
		player_position = ft_strchr(game->layout_copy[i], 'P');
		exit_position = ft_strchr(game->layout_copy[i], 'E');
		game->coll_copy_position = ft_strchr(game->layout_copy[i], 'C');
		if (player_position != NULL)
		{
			game->player_x_cpy = player_position - game->layout_copy[i];
			game->player_y_cpy = i;
		}
		if (exit_position != NULL)
			not_exit_position(game, exit_position, i);
		while (game->coll_copy_position != NULL)
			not_coll_copy_position(game);
		i++;
	}
	close(game->fd);
}

int	open_file(char *file_path, t_game	*game)
{
	int	fd;

	fd = open(file_path, O_RDONLY);
	if (fd == -1)
	{
		ft_printf("Fehler beim Öffnen der Datei");
		free(game);
		exit(EXIT_FAILURE);
	}
	return (fd);
}

void	calculate_map_dimensions(t_game *game, int fd)
{
	char	*line;
	int		gnl_width;
	int		gnl_height;

	line = NULL;
	gnl_width = 0;
	gnl_height = 0;
	line = get_next_line(fd);
	while (line != NULL)
	{
		gnl_height++;
		if (gnl_height == 1)
			gnl_width = ft_strlen(line);
		free(line);
		line = get_next_line(fd);
	}
	ft_printf("WIDTH: %i\n", gnl_width - 1);
	ft_printf("HEIGHT: %i\n", gnl_height);
	game->width = gnl_width - 1;
	game->height = gnl_height;
}

int	is_ber_file(char *file_path)
{
	size_t	length;

	length = ft_strlen(file_path);
	if (length >= 4)
	{
		if (ft_strncmp(file_path + length - 4, ".ber", 4) == 0)
		{
			ft_printf("map selected!\n");
			return (1);
		}
	}
	ft_printf("The map does not have the correct ending '.ber'\n");
	return (0);
}
