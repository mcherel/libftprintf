# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/07 23:23:07 by mcherel-          #+#    #+#              #
#    Updated: 2022/01/11 17:22:13 by mcherel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror
SRCS = ./srcs/
HEADERS = ./includes/
LIB_FILES = ft_printf.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_itoa.c \
			#ft_strchr.c \
			ft_converts.c \
			ft_strlen.c \#
			

O_FILES = $(LIB_FILES:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(O_FILES):
			gcc -c $(addprefix $(SRCS), $(LIB_FILES)) -I $(HEADERS) $(FLAGS)

$(NAME): $(O_FILES)
			ar rc $(NAME) $(O_FILES)

clean:
			rm -rf $(O_FILES)

fclean: clean
			rm -rf $(NAME)

re: fclean all