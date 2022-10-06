# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hudelier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 09:18:08 by hudelier          #+#    #+#              #
#    Updated: 2022/10/06 09:20:06 by hudelier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c\
	srcs/ft_swap.c\
	srcs/ft_putstr.c\
	srcs/ft_strlen.c\
	srcs/ft_strcmp.c
NAME	= libft.a

OBJ	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME):$(OBJ)
	ar rc $(NAME) $(OBJ)

.c.o:
	gcc -Wall -Wextra -Werror -c $< -I includes -o $@

clean:
	/bin/rm -f $(OBJ)

fclean:	clean
	/bin/rm -f $(NAME)

re: fclean all
