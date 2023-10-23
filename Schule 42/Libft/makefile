NAME = libft
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): main.o helper.o
	$(CC) $(CFLAGS) -o $(NAME) main.o helper.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

helper.o: helper.c
	$(CC) $(CFLAGS) -c helper.c

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all