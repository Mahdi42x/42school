# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/15 13:09:42 by mawada            #+#    #+#              #
#    Updated: 2024/02/15 16:25:21 by mawada           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra 

LIBS	=	 ./printf/libftprintf.a

SRCS	=	src/libft_utils/ft_atoi.c\
			src/libft_utils/ft_calloc.c\
			src/libft_utils/ft_lstadd_back.c\
			src/libft_utils/ft_lstadd_front.c\
			src/libft_utils/ft_lstlast.c\
			src/libft_utils/ft_lstnew.c\
			src/libft_utils/ft_lstsize.c\
			src/libft_utils/ft_split.c\
			src/libft_utils/ft_strlen.c\
			push_swap.c\
			src/parsing.c\
			src/check.c\
			src/operations1.c\
			src/operations2.c\
			src/operations3.c\
			src/operation_utils.c\
			src/sort_three.c\
			src/sort_algo.c\
			src/free.c

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME): $(OBJS)
			make -C  ./printf
			$(CC) $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

clean:
			make clean -C  ./printf
			rm -rf $(OBJS)
			
fclean:		clean
			rm -rf $(NAME) $(LIBS)

re:			fclean all

.PHONY: all clean fclean re
