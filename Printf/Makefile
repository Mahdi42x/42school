# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 10:51:15 by mawada            #+#    #+#              #
#    Updated: 2023/11/26 13:35:19 by mawada           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_printf.c	print_command.c \
					print_command_2.c
					
OBJS			= $(SRCS:.c=.o)

CC			= cc
RM			= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)
			
clean:
			$(RM) $(OBJS)
			
fclean:			clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:			all clean fclean re 
