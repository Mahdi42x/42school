
NAME	=	philo

CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra -g

SRCS	=	philo.c src/error.c src/init.c src/utils.c src/launcher.c src/single_case.c

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME): $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			rm -rf $(OBJS)
			
fclean:		clean
			rm -rf $(NAME)

re:			fclean all

.PHONY: all clean fclean re
