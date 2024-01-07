#include "../libs/minilibx-linux/mlx.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void *mlx_ptr;
void *win_ptr;
void *img_ptr;
int img_width;
int img_height;
int player_x = 0;
int player_y = 0;
int pressed_keys_count = 0; // Zählvariable für die Anzahl der gedrückten Tasten

void exit_failure(const char *message) {
    fprintf(stderr, "%s\n", message);
    mlx_destroy_window(mlx_ptr, win_ptr);
    exit(EXIT_FAILURE);
}

int close_window(void *param) {
    (void)param;
    mlx_destroy_image(mlx_ptr, img_ptr);
    mlx_destroy_window(mlx_ptr, win_ptr);
    exit(EXIT_SUCCESS);
    return 0;
}

void move_player(int keycode) {
    printf("Key pressed: %d\n", keycode);

    bool valid_key = false;

    if (keycode == 13 || keycode == 119 || keycode == 87 || keycode == 126 || keycode == 65362) { // 'W' oder 'w'
        player_y -= 10;
        valid_key = true;
    } else if (keycode == 0 || keycode == 97 || keycode == 65 || keycode == 123 || keycode == 65361) { // 'A' oder 'a'
        player_x -= 10;
        valid_key = true;
    } else if (keycode == 1 || keycode == 115 || keycode == 83 || keycode == 125 || keycode == 65364) { // 'S' oder 's'
        player_y += 10;
        valid_key = true;
    } else if (keycode == 2 || keycode == 100 || keycode == 68 || keycode == 124 || keycode == 65363) { // 'D' oder 'd'
        player_x += 10;
        valid_key = true;
    }

    if (valid_key) {
        pressed_keys_count++; // Erhöhen Sie die Anzahl der gedrückten Tasten nur für gültige Tasten
        mlx_clear_window(mlx_ptr, win_ptr);
        mlx_put_image_to_window(mlx_ptr, win_ptr, img_ptr, player_x, player_y);
    }
}

void print_pressed_keys() {
    printf("Anzahl der gedrückten Tasten: %d\n", pressed_keys_count);
}

int handle_key(int keycode, void *param) {
    (void)param;
    if (keycode == 53 || keycode == 27 || keycode == 9 || keycode == 65307) // ASCII-Code für die Escape-Taste
        close_window(param);

    move_player(keycode);
    if (keycode == 13 || keycode == 119 || keycode == 87 || keycode == 126 || 
        keycode == 0 || keycode == 97 || keycode == 65 || keycode == 123 || 
        keycode == 1 || keycode == 115 || keycode == 83 || keycode == 125 || 
        keycode == 2 || keycode == 100 || keycode == 68 || keycode == 124 || 
        keycode == 65362 || keycode == 65361 || keycode == 65364 || keycode == 65363) {
        print_pressed_keys(); // Rufen Sie die Funktion auf, um die Anzahl der gedrückten Tasten anzuzeigen
    }
    return 0;
}

int handle_key_release(int keycode, void *param) {
    (void)keycode; // Ignorieren Sie den nicht verwendeten Parameter
    (void)param;
    if (keycode == 13 || keycode == 119 || keycode == 87 || keycode == 126 || 
        keycode == 0 || keycode == 97 || keycode == 65 || keycode == 123 || 
        keycode == 1 || keycode == 115 || keycode == 83 || keycode == 125 || 
        keycode == 2 || keycode == 100 || keycode == 68 || keycode == 124 || 
        keycode == 65362 || keycode == 65361 || keycode == 65364 || keycode == 65363) {
    }
    return 0;
}

int handle_loop(void *param) {
    mlx_do_sync(param); // Synchronisiere die Ereignisse
    return 0;
}

void open_window() {
    mlx_ptr = mlx_init();
    if (!mlx_ptr) {
        exit_failure("Fehler beim Initialisieren der MinilibX.");
    }

    win_ptr = mlx_new_window(mlx_ptr, 1175, 600, "Mein Fenster");
    if (!win_ptr) {
        exit_failure("Fehler beim Erstellen des Fensters.");
    }

    img_ptr = mlx_xpm_file_to_image(mlx_ptr, "img/tree.xpm", &img_width, &img_height);
    if (!img_ptr) {
        exit_failure("Fehler beim Laden der XPM-Datei.");
    }

    mlx_put_image_to_window(mlx_ptr, win_ptr, img_ptr, player_x, player_y);

    mlx_hook(win_ptr, 17, 0, close_window, mlx_ptr);
    mlx_hook(win_ptr, 2, 1L<<0, handle_key, mlx_ptr); // KeyPress-Ereignis
    mlx_hook(win_ptr, 3, 1L<<1, handle_key_release, mlx_ptr); // KeyRelease-Ereignis
    mlx_loop_hook(mlx_ptr, handle_loop, mlx_ptr);

    mlx_loop(mlx_ptr);
}

int main() {
    open_window();
    return 0;
}

