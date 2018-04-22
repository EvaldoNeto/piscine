/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 09:36:03 by eneto             #+#    #+#             */
/*   Updated: 2016/09/15 12:59:12 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "functions.h"

int		main(int argc, char **argv)
{
	int		file;
	int		i;

	i = 1;
	if (argc < 2)
	{
		ft_putstr("File name is missing.\n");
		return (1);
	}
	while (i < argc)
	{
		file = open(argv[i], O_RDONLY | O_SYMLINK);
		if (file == -1)
		{
			ft_putstr("open() error\n");
			return (1);
		}
		display_content(file);
		if (close(file) == -1)
		{
			ft_putstr("close() error\n");
			return (1);
		}
		i++;
	close(file);
	}
	return (0);
}
