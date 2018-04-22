#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eneto <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/12 15:05:31 by eneto             #+#    #+#              #
#    Updated: 2016/09/12 15:49:35 by eneto            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc

FLAGS = -Wall -Wextra -Werror

SRC = ex*/ft_*.c

NORM = norminette

N_FLAG = -R CheckForbiddenSourceHeader

EXE = test

all:
	$(CC) $(FLAGS) $(SRC) *.c -o $(EXE)

norm: 
	$(NORM) $(N_FLAG) $(SRC)

clean:
	@/bin/rm -f *~ *# ex*/*~ ex*/*#

fclean: clean
	@/bin/rm -f $(EXE)

re: fclean all