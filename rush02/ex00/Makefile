#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eneto <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/17 14:56:17 by eneto             #+#    #+#              #
#    Updated: 2016/09/18 00:07:15 by eneto            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = rush-2

LIB_NAME = lib_colle.a

CC = gcc

FLAGS = -Wall -Werror -Wextra

PATH = rush00/

SRCS = $(shell find srcs -type f -name "*.c")

OBJ = $(SRCS:.c=.o)

INC = includes/

all: lib main

main:
	@$(CC) $(FLAGS) main.c $(LIB_NAME) -o $(NAME)

lib: $(OBJ)
	@ar ruv $(LIB_NAME) $(OBJ)
	@ranlib $(LIB_NAME)

%.o: $(SRCS)%.c
	@$(CC) -I $(INC) $(FLAGS) -c $< -o $@

all_colle: 00 01 02 03 04

00:
	$(CC) $(FLAGS) $(PATH)colle00.c $(PATH)main.c $(PATH)ft_putchar.c -o colle-00

01:
	$(CC) $(FLAGS) $(PATH)colle01.c $(PATH)main.c $(PATH)ft_putchar.c -o colle-01

02:
	$(CC) $(FLAGS) $(PATH)colle02.c $(PATH)main.c $(PATH)ft_putchar.c -o colle-02

03:
	$(CC) $(FLAGS) $(PATH)colle03.c $(PATH)main.c $(PATH)ft_putchar.c -o colle-03

04:
	$(CC) $(FLAGS) $(PATH)colle04.c $(PATH)main.c $(PATH)ft_putchar.c -o colle-04

clean:
	@/bin/rm -f *.o *~ *# $(INC)*~ $(INC)*# srcs/*~ srcs/*# srcs/*.o

fclean: clean
	@/bin/rm -f $(NAME) colle-* $(LIB_NAME)

re: fclean all