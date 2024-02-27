CLIENT = client
SERVER = server
LIBFT = ./libft/libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: $(SERVER) $(CLIENT)

$(SERVER): server.o libft
	@$(CC) $(FLAGS) $< $(LIBFT) -o $@

$(CLIENT): client.o libft
	@$(CC) $(FLAGS) $< $(LIBFT) -o $@

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

libft:
	@make -C ./libft

clean:
	@$(RM) $(SERVER) $(CLIENT) *.o
	@make clean -C ./libft

fclean: clean
	@$(RM) $(LIBFT)

re: fclean all

.PHONY: all clean fclean re libft

