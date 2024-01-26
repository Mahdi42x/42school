/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:28:14 by mawada            #+#    #+#             */
/*   Updated: 2024/01/25 17:19:06 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	compare_line_lengths(t_game *game, t_vali	*vali)
{
	vali->expected_length = ft_strlen(game->layout[0]);
	vali->i = 1;
	vali->height = (size_t)game->height;
	vali->error_message = "has a different length than the first line";
	while (vali->i < vali->height)
	{
		vali->line_length = ft_strlen(game->layout[vali->i]);
		if (game->layout[vali->i][vali->line_length - 1] != '\n')
		{
			vali->line_length++;
		}
		if (vali->line_length != vali->expected_length)
		{
			ft_printf("Error\n");
			ft_printf("line %i %s\n", vali->i + 1, vali->error_message);
			ft_printf("The map must be rectangular!\n");
			free_array(&game->layout, game->height);
			free(game);
			free(vali);
			exit(EXIT_FAILURE);
		}
		vali->i++;
	}
}
