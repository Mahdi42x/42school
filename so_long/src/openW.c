#include "../libs/minilibx-linux/mlx.h"
#include <stdio.h>
#include <stdlib.h>

void *mlx_ptr;
void *win_ptr;

void exit_failure(const char *message) {
    fprintf(stderr, "%s\n", message);
    mlx_destroy_window(mlx_ptr, win_ptr);
    exit(EXIT_FAILURE);
}

void add_image(char *image_path, int x_position, int y_position) {
    void *img_ptr;
    int width, height;

    img_ptr = mlx_xpm_file_to_image(mlx_ptr, image_path, &width, &height);
    if (!img_ptr) {
        char error_message[100];
        snprintf(error_message, sizeof(error_message), "Fehler beim Laden des Bildes '%s'.", image_path);
        exit_failure(error_message);
    }

    mlx_put_image_to_window(mlx_ptr, win_ptr, img_ptr, x_position, y_position);
}

int close_window(void *param) {
    (void)param;
    exit(0);
    return 0;
}

int handle_key(int keycode, void *param) {
    (void)param;
    if (keycode == 53) // ASCII-Code für die Escape-Taste
        close_window(param);
    return 0; // oder einen anderen geeigneten Rückgabewert
}

int handle_loop(void *param) {
    mlx_do_sync(param); // Synchronisiere die Ereignisse
    return (0);
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
	
    int x_position1 = 0;
    int y_position1 = 0;
    add_image("img/floor.xpm", x_position1, y_position1);

    // Verwende die add_image-Funktion für das zweite Bild
    int x_position2 = 10;
    int y_position2 = 10;
    add_image("img/tree.xpm", x_position2, y_position2);
    
    /*
    int x_position3 = 0;
    int y_position3 = 0;
    add_image("img/Background-Trees.xpm", x_position3, y_position3);
    */

    mlx_hook(win_ptr, 17, 0, close_window, mlx_ptr);

    mlx_hook(win_ptr, 2, 0, handle_key, mlx_ptr); // 2 entspricht dem KeyPress-Ereignis
    mlx_loop_hook(mlx_ptr, handle_loop, mlx_ptr);

    mlx_loop(mlx_ptr);
}

int main() {
    open_window();
    return 0;
}
