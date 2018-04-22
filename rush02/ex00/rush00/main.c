/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 01:55:39 by eneto             #+#    #+#             */
/*   Updated: 2016/09/17 15:22:16 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	colle(int x, int y);

int		main(int argc, char **argv)
{
	(void)argc;
	
	colle(atoi(argv[1]), atoi(argv[2]));
	return (0);
}
