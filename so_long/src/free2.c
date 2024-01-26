/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:27:57 by mawada            #+#    #+#             */
/*   Updated: 2024/01/26 13:09:29 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	free_not_surrounded_by_walls(t_vali *vali)
{
	free_array(&vali->game->layout, vali->game->height);
	free(vali->game);
	free(vali);
	exit(EXIT_FAILURE);
}

void	free_invalid_character(t_vali *vali)
{
	ft_printf("Error\nInvalid map - invalid character: %c\n",
		vali->current_char);
	free_array(&vali->game->layout, vali->game->height);
	free(vali->game);
	free(vali);
	exit(EXIT_FAILURE);
}

//not to free!
void	not_exit_position(t_game *game, char *exit_position, int i)

{
	game->exit_x = exit_position - game->layout_copy[i];
	game->exit_y = i;
}

void	not_coll_copy_position(t_game *game)
{
	game->coll_copy++;
	game->coll_copy_position = ft_strchr
		(game->coll_copy_position + 1, 'C');
}
