#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eneto <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/13 11:02:06 by eneto             #+#    #+#              #
#    Updated: 2016/09/14 06:07:00 by eneto            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc

FLAGS = -Wall -Werror -Wextra

SRC = ex*/ft_*.c

NORM = norminette

N_FLAG = -R CheckForbiddenSourceHeader

EXE = test

all:
	$(CC) $(FLAGS) $(SRC) *.c -o $(EXE)

norm:
	$(NORM) $(N_FLAG) $(SRC) ex*/ft_*.h

clean:
	@/bin/rm -f *~ *# ex*/*~ ex*/*# *.o ex*/*.o

fclean: clean
	@/bin/rm -f $(EXE)

re: fclean all

test:
	echo $(SRC) $(OBJ)