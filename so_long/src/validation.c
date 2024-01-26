/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:19:59 by mawada            #+#    #+#             */
/*   Updated: 2024/01/26 12:53:55 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	count_components(t_vali *vali, t_game *game)
{
	while (vali->y < game->height)
	{
		vali->x = 0;
		while (vali->x < game->width)
		{
			if (vali->y < game->height && vali->x < game->width)
			{
				vali->current_char = game->layout[vali->y][vali->x];
				if (vali->current_char != '0' && vali->current_char != '1'
					&& vali->current_char != 'C' && vali->current_char != 'E'
					&& vali->current_char != 'P')
				{
					free_invalid_character(vali);
				}
				if (vali->current_char == 'E')
					vali->exit_count++;
				else if (vali->current_char == 'C')
					vali->collectible_count++;
				else if (vali->current_char == 'P')
					vali->player_count++;
				vali->x++;
			}
		}
		vali->y++;
	}
}

void	check_counts(t_vali *vali)
{
	if (vali->exit_count < 1 || vali->collectible_count < 1 
		|| vali->player_count < 1)
	{
		ft_printf("Error\nInvalid map - missing components\n");
		free_array(&vali->game->layout, vali->game->height);
		free(vali->game);
		free(vali);
		exit(EXIT_FAILURE);
	}
	if (vali->exit_count > 1 || vali->player_count > 1)
	{
		ft_printf("Error\nDuplicate exits or player positions\n");
		free_array(&vali->game->layout, vali->game->height);
		free(vali->game);
		free(vali);
		exit(EXIT_FAILURE);
	}
}

void	check_surroundings(t_vali *vali, t_game *game)
{
	vali->j = 0;
	while (vali->j < game->width)
	{
		if (game->layout[0][vali->j] != '1' 
			|| game->layout[game->height - 1][vali->j] != '1')
		{
			ft_printf("Error\nMap is not surrounded by walls\n");
			free_not_surrounded_by_walls(vali);
		}
		vali->j++;
	}
	vali->j = 1;
	while (vali->j < game->height - 1)
	{
		if (game->layout[vali->j][0] != '1' 
			|| game->layout[vali->j][game->width - 1] != '1')
		{
			ft_printf("Error\nMap is not surrounded by walls\n");
			free_not_surrounded_by_walls(vali);
		}
		vali->j++;
	}
}

void	validate_map(t_game	*game)
{
	t_vali	*vali;

	vali = (t_vali *)malloc(sizeof(t_vali));
	check_memory_allocation(vali);
	vali->exit_count = 0;
	vali->collectible_count = 0;
	vali->player_count = 0;
	vali->y = 0;
	vali->game = NULL;
	vali->game = game; 
	compare_line_lengths(game, vali);
	count_components(vali, game);
	check_counts(vali);
	check_surroundings(vali, game);
	free(vali);
}
