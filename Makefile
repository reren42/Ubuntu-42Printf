# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: reren <reren@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/30 12:59:21 by reren             #+#    #+#              #
#    Updated: 2024/11/30 13:25:45 by reren            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
CC	=	cc
CFLAGS	=	-Wall -Wextra -Werror
RM	=	rm -rf
AR	=	ar rcs
SRC		=	ft_char.c \
			ft_string.c \
			ft_hexa.c \
			ft_int.c \
			ft_pointer.c \
			ft_printf.c \
			ft_unsigned.c \
			
OBJ	=	$(SRC:.c=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re

