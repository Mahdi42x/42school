# Name of the target executable
NAME = minitalk

# Compiler
CC = cc

# Compiler flags
CFLAGS = -Wall -Werror -Wextra

# Library files
LIBS = ./libft/libft.a

# Source files
SRCS = client.c server.c

# Object files directory
OBJ_DIR = obj

# Object files
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

# Build the target executable
all: server client

server: $(OBJ_DIR)/server.o libft
	$(CC) -o $@ $< -Llibft -lft

client: $(OBJ_DIR)/client.o libft
	$(CC) -o $@ $< -Llibft -lft

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) -c $(CFLAGS) -o $@ $<

libft:
	make -C libft
	
# Create object directory if it doesn't exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Clean intermediate files
clean:
	# Clean libft targets
	make clean -C ./libft
	# Remove object files and the object directory
	rm -rf $(OBJ_DIR)

# Remove all generated files
fclean:
	# Fclean libft targets
	make fclean -C ./libft
	# Remove object files, the object directory, and the target executable
	rm -rf $(OBJ_DIR)
	rm -rf server client

# Rebuild the project
re: fclean all

# Specify the phony targets
.PHONY: all libft clean fclean re

