# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juduval <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 19:26:31 by juduval           #+#    #+#              #
#    Updated: 2022/10/01 20:04:34 by juduval          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = atoi.c\dictionary.c\ft_dict_error.c\ft_error.c\ft_putchar.c\ft_putstr.c\ft_strcmp.c\ft_strlen.c\ft_utile2.c\ft_utile.c\howmanytab.c\main.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
