# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hudelier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 16:59:38 by hudelier          #+#    #+#              #
#    Updated: 2022/10/04 16:59:43 by hudelier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# VARIABLES
CC		=	gcc
EXEC	=	bsq
CFLAGS	=	-Wall \
			-Wextra \
			-Werror
DFLAGS	=	-g3 \
			-fsanitize=address
SRC_PATH=	srcs/
INC_PATH=	includes/
SRC		=	main.c \
			ft_atoi.c \
			ft_prog.c \
			ft_realloc.c \
			ft_strichr.c \
			ft_strlen.c \
			ft_print.c \
			ft_countchr.c \
			ft_init_var.c \
			ft_convert_map.c \
			ft_useful.c
OBJ_PATH=	obj/
OBJ		=	$(addprefix $(OBJ_PATH), $(SRC:.c=.o))
vpath %.c $(foreach rep, $(SRC_PATH), $(rep))
INCLUDE	=	$(addprefix $(INC_PATH), bsq.h)

# COMPILATION

$(EXEC)	:	$(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(DFLAGS)

$(OBJ)	:	$(INCLUDE)

$(OBJ_PATH)%.o	:	%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -o $@ -c $< -I $(INC_PATH) $(DFLAGS)

# RULES

all		:	$(EXEC)

clean	:
	rm -rf $(OBJ) $(OBJ_PATH)

fclean	:	clean
	rm -rf $(EXEC)

re		:	fclean all

.PHONY	:	all clean fclean re
