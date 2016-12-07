# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/22 14:55:25 by mcolas-d          #+#    #+#              #
#    Updated: 2016/12/07 06:21:26 by mcolas-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = backtracking.c \
	  check1.c \
	  check2.c \
	  fct1.c \
	  fct2.c \
	  build_tetri.c \
	  fct3.c \
	  main.c

OBJ = $(SRC:.c=.o)

$(NAME):
	gcc -o $(NAME) -Wall -Wextra -Werror $(SRC)

all:
	$(NAME)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY : fillit all re fclean clean
