
NAME	=	so_long

CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra -Imlx -g 

MLXFLAGS=	-L ./libs/minilibx-linux -lmlx -lXext -lX11

LIBS	=	 ./libs/libft/libft.a

SRCS	=	src/window.c src/sprites.c src/readMap.c src/check.c src/movements.c \
			src/validation.c src/path.c src/path2.c src/validation2.c src/movements2.c \
			src/free.c src/free2.c so_long.c

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME): $(OBJS)
			make -C  ./libs/minilibx-linux
			make -C  ./libs/libft
			$(CC) $(CFLAGS) $(OBJS) $(LIBS) $(MLXFLAGS) $(PRINTF) -o $(NAME)

clean:
			make clean -C  ./libs/minilibx-linux
			make clean -C  ./libs/libft
			rm -rf $(OBJS)
			
fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY: all clean fclean re