# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcherel- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/07 23:23:07 by mcherel-          #+#    #+#              #
#    Updated: 2022/01/25 00:51:11 by mcherel-         ###   ########.fr        #
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
			ft_getnblen.c \
			ft_nbtostr.c \
			ft_utoa.c \
			ft_xtoa.c \
			ft_strlen.c \
			ft_strcmp.c \
			ft_switch.c \
			ft_argsc.c \
        	ft_argdiu.c \
        	ft_argxXp.c \
			ft_calloc.c \
			ft_bzero.c \
			
			

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

#TO REMOVE
test:		
			clang $(FLAGS) _main.c libftprintf.a && ./a.out
f:
			gcc main.c libftprintf.a && ./a.out 