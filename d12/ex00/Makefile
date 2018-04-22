#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eneto <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/15 09:51:17 by eneto             #+#    #+#              #
#    Updated: 2016/09/15 10:03:17 by eneto            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

CC = gcc

FLAGS = -Wall -Werror -Wextra

NORM = norminette

NORM_FLAGS = -R CheckForbiddenSourceHeader

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) *.c -o $(NAME)

norm:
	$(NORM) $(NORM_FLAGS) *.c

clean:
	@/bin/rm -f *.o *~ *#

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all