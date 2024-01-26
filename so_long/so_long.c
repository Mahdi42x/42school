/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:19:17 by mawada            #+#    #+#             */
/*   Updated: 2024/01/26 14:59:03 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char *argv[])
{
	t_game	*game;

	if (argc != 2 || !is_ber_file(argv[1]))
	{
		ft_printf("try: %s <map.ber>\n", argv[0]);
		return (1);
	}
	game = malloc(sizeof(t_game));
	game->remaining_collectibles = 0;
	game->coll_copy = 0;
	game->steps = 0;
	check_memory_allocation_return1(game);
	game->fd = open_file(argv[1], game);
	filechecker(game->fd, argv[1]);
	calculate_map_dimensions(game, game->fd);
	close(game->fd);
	game->fd = open_file(argv[1], game);
	filechecker(game->fd, argv[1]);
	readwholetext(game, argv[1]);
	validate_map(game);
	check_for_path(game, argv[1], game->player_x, game->player_y);
	open_window(game);
	return (0);
}
