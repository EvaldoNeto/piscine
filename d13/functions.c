/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 21:01:49 by eneto             #+#    #+#             */
/*   Updated: 2016/09/16 15:13:04 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_btree.h"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(void *str)
{
	char *aux = malloc(50);

	aux = str;
	while (*aux)
	{
		ft_putchar(*aux);
		aux++;
	}
	write(1, "\n", 1);
}

int		ft_strcmp(void *str1, void *str2)
{
	char *aux1 = malloc(50);
	char *aux2 = malloc(50);
	
	aux1 = str1;
	aux2 = str2;
	if (*aux1 != *aux2)
		return (*aux1 - *aux2);
	else if (!(*aux2) && !(*aux2))
		return (0);
	else
		return (ft_strcmp(str1 + 1, str2 + 1));
}
