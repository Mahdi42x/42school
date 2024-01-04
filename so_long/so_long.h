#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <stdio.h>
# include "../libs/libft/libft.h"
# include "../libs/minilibx-linux/mlx.h"
# include <X11/keysym.h>
# include <X11/X.h>
# include <fcntl.h>

extern void *mlx_ptr;
extern void *win_ptr;


void load_level(char *level_path);
void exit_failure(const char *error_message);
int close_window(void *param);
int handle_key(int keycode, void *param);
int handle_loop(void *param);

int add_image(void *win_ptr, char *path, int x_position, int y_position);
int mlx_hook(void *win_ptr, int event, int mask, int callback, void *param);
int mlx_loop(void *mlx_ptr);

void open_window();
void add_image(char *image_path, int x_position, int y_position);

#endif
