# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcolas-d <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 08:29:35 by mcolas-d          #+#    #+#              #
#    Updated: 2016/11/04 10:15:10 by mcolas-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Correctif

SRCS = ../*.c \
	   ./*.c

HEADER = ../libft.h \
		 test_header.h

FLAG = -Werror -Wall -Wextra

all: $(NAME)

$(NAME) :
	gcc -I test_header.h -I ../libft.h $(FLAG) $(SRCS) -o $(NAME)

clean :
	rm -f $(NAME)

re : clean all
