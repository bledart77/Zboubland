# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/22 14:55:25 by mcolas-d          #+#    #+#              #
#    Updated: 2016/12/20 00:02:45 by mcolas-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = backtracking.c \
	  check1.c \
	  check2.c \
	  check3.c \
	  fct1.c \
	  fct2.c \
	  build_tetri.c \
	  fct3.c \
	  main.c

OBJ = $(SRC:.c=.o)

$(NAME):
	gcc -c $(SRC) -Wall -Wextra -Werror
	gcc $(OBJ) -o fillit

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all re fclean clean
