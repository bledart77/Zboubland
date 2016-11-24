# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/22 14:55:25 by mcolas-d          #+#    #+#              #
#    Updated: 2016/11/22 15:01:25 by mcolas-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = *.c

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -o $(NAME) -Wall -Wextra -Werror $(SRC)

clean:
	rm $(SRC)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY : fillit all re fclean clean
