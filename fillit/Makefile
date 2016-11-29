# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/22 14:55:25 by mcolas-d          #+#    #+#              #
#    Updated: 2016/11/28 12:53:29 by mcolas-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = backtracking.c \
	  check1.c \
	  check2.c \
	  fct1.c \
	  fct2.c \
	  main.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -o $(NAME) -Wall -Wextra -Werror $(SRC)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY : fillit all re fclean clean
