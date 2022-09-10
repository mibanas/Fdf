# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msanabi <msanabi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/17 16:28:20 by msanabi           #+#    #+#              #
#    Updated: 2019/08/17 00:24:10 by msanabi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

$(NAME):
	gcc -Wall -Werror -Wextra -c *.c
	ar rc $(NAME) *.o
	ranlib $(NAME)

all: $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf libft.a

re: fclean all