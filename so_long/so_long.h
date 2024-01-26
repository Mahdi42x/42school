/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:19:30 by mawada            #+#    #+#             */
/*   Updated: 2024/01/26 14:58:33 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define EMPTY_SPACE	"0"
# define WALL 			"1"
# define COLLECTIBLE	"C"
# define EXIT 			"E"
# define PLAYER 		"P"

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdbool.h>
# include "libs/libft/libft.h"
# include "libs/minilibx-linux/mlx.h"
# include <X11/keysym.h>
# include <X11/X.h>
# include <X11/Xlib.h>
# include <fcntl.h>
# include <stddef.h>

typedef struct s_sprites
{
	void	*ground_tile;
	void	*wall;
	void	*collectible;
	void	*exits;
	void	*player;
	void	*ecke;
	void	*ecke2;
}	t_sprites;

typedef struct s_image
{
	int	img_width;
	int	img_height;
}	t_image;

typedef struct s_game
{
	t_sprites	sprite;
	void		*mlx_connection;
	void		*mlx_win;
	int			width;
	int			height;
	int			fd;
	char		**layout;
	char		**layout_copy;
	int			player_x;
	int			player_y;
	int			player_x_cpy;
	int			player_y_cpy;
	int			exit_y;
	int			exit_x;

	int			i;
	char		*player_position;
	char		*exit_position;
	int			y;
	int			x;
	int			steps;
	char		*collectible_position;
	char		*coll_copy_position;
	int			remaining_collectibles;
	int			coll_copy;
	char		*steps_str;
	char		*remaining_str;
}	t_game;

typedef struct s_vali
{
	t_game		*game;
	int			exit_count;
	int			collectible_count;
	int			player_count;
	int			y;
	int			x;
	int			j;
	char		current_char;
	size_t		expected_length;
	size_t		i;
	size_t		height;
	size_t		line_length;
	const char	*error_message;
}	t_vali;

typedef struct s_move
{
	int			original_x;
	int			original_y;
	int			yplus;
	int			xplus;
	int			yminus;
	int			xminus;
	t_game		*game;
}	t_move;

typedef struct s_copy
{
	char	**copy;
	int		i;
	int		j;
}	t_copy;

void		open_window(t_game *game);

void		put_sprites(t_game *game);

void		readwholetext(t_game *game, char *argv);

void		readwholetext_forcopy(t_game *game, char *argv);
void		move_player(int keycode, t_game *game); 

void		won(t_game *game);

int			display_string(t_game *game);

t_sprites	*init_sprites(void	*mlx_connection, t_game *game);

void		getSizeAndReadText(t_game *game, char *argv);

void		validate_map(t_game *game);

void		check_rectangular_map(t_game *game);

void		check(t_game *game);

void		put_sprite_on_window(t_game *game, char sprite_char, int x, int y);

t_move		*initialize_move(t_game *game);

t_move		*allocate_move(t_game *game);

void		set_original_positions(t_move *move, t_game *game);

void		update_player_position(t_game *game, int new_x, int new_y);

void		collect_collectible(t_game *game);

void		reset_player_positions(t_game *game, t_move *move);

bool		is_valid_move(t_game *game, int keycode);

void		handle_valid_move(t_game *game, int keycode);

void		move_player(int keycode, t_game *game);

int			display_string(t_game *game);

int			open_file(char *file_path, t_game *game);

void		calculate_map_dimensions(t_game *game, int fd);

int			is_ber_file(char *file_path);

void		compare_line_lengths(t_game *game, t_vali *vali);

void		check_memory_allocation(void *ptr);

int			check_memory_allocation_return1(void *ptr);

int			filechecker(int ptr, char *argv);

void		free_sprites(t_sprites *sprites);

void		free_exit(t_game *game);

void		*check_memory_allocation_return_null(void *ptr);

void		free_array(char ***arr, int lines);

void		free_copied_layout(char ***arr, int lines);

int			find_all_collectibles(t_game *game, int x, int y);

int			find_exit(t_game *game, int x, int y);

int			check_for_path(t_game *game, char *file, int x, int y);

void		free_invalid_path(t_game *game);

void		free_invalid_character(t_vali *vali);

void		free_not_surrounded_by_walls(t_vali *vali);

void		not_exit_position(t_game *game, char *exit_position, int i);

void		not_coll_copy_position(t_game *game);

#endif