# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/26 17:11:39 by hbenazza          #+#    #+#              #
#    Updated: 2024/03/06 10:48:26 by hbenazza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = main.c ft_strlen.c ft_strjoin.c ft_strdup.c ft_split.c ft_substr.c parse.c ft_atoi.c param.c init.c ft_lstadd_back.c ft_lstnew.c ft_lstadd_front.c instructions.c instructions1.c instructions2.c algorithms.c tools.c tools2.c moves.c chunks.c

OBJ = ${SRC:.c=.o}

CC = cc

CFLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJ) $(SRC)
		@$(CC) $(CFLAGS) $(OBJ) -o $@
		@echo "ready!"

clean:
		@rm -rf $(OBJ)
		@echo "objects are removed!"

all: $(NAME)

fclean:
	@rm -rf $(OBJ) $(NAME)
	@echo "objects and executable are removed!"

re: clean all
