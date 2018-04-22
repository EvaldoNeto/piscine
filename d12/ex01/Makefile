#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eneto <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/15 12:35:35 by eneto             #+#    #+#              #
#    Updated: 2016/09/15 13:11:45 by eneto            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_cat

CC = gcc

FLAGS = -Wall -Werror -Wextra

NORM = norminette

NORM_FLAGS = -R CheckForbiddenSourceHeader

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) *.c -o $(NAME)

norm:
	$(NORM) $(NORM_FLAGS)

clean:
	@/bin/rm -f *.o *~ *#

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all