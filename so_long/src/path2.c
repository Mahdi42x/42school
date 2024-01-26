/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:28:40 by mawada            #+#    #+#             */
/*   Updated: 2024/01/26 12:36:56 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_for_path(t_game *game, char *file, int x, int y)
{
	readwholetext_forcopy(game, file);
	find_all_collectibles(game, x, y);
	if (game->coll_copy == 0)
	{
		if (find_exit(game, x, y) == 1)
		{
			ft_printf("Map passed all checks. Game is launching... \n");
			free_copied_layout(&game->layout_copy, game->height);
			return (1);
		}
		else
		{
			ft_printf("no valid path for exit\n");
			free_invalid_path(game);
		}
	}
	else
	{
		ft_printf("no valid path for Player or a collectible\n");
		free_invalid_path(game);
	}
	return (0);
}
