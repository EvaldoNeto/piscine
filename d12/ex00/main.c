/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 09:36:03 by eneto             #+#    #+#             */
/*   Updated: 2016/09/15 12:33:33 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "functions.h"

int		main(int argc, char **argv)
{
	int		file;

	if (argc < 2)
	{
		ft_putstr("File name is missing.\n");
		return (1);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments\n");
		return (1);
	}
	file = open(argv[1], O_RDONLY | O_SYMLINK);
	if (file == -1)
		ft_putstr("open() error\n");
	display_content(file);
	if (close(file) == -1)
	{
		ft_putstr("close() error\n");
		return (1);
	}
	return (0);
}
