/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 21:30:21 by eneto             #+#    #+#             */
/*   Updated: 2016/09/13 03:10:39 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_atoi(char *str);

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int	u[2];

	u[0] = ft_atoi(argv[1]);
	u[1] = ft_atoi(argv[3]);
	if (argc != 4)
		return (0);
	return (0);
}
