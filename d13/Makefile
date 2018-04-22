#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eneto <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/16 02:03:53 by eneto             #+#    #+#              #
#    Updated: 2016/09/16 15:22:47 by eneto            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = test

NORM = norminette

NORM_FLAGS = -R CheckForbiddenSourceHeader

all: $(NAME)

$(NAME): 
	$(CC) $(FLAGS) ex*/*.c *.c -o test

norm:
	$(NORM) $(NORM_FLAGS) ex*/*.c ex*/ft_*.h

clean:
	@/bin/rm -f *.o *~ *# ex*/*.o ex*/*~ ex*/*#

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all