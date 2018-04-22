/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 21:01:49 by eneto             #+#    #+#             */
/*   Updated: 2016/09/14 22:06:02 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_list.h"

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

int		ft_strcmp(char *str1, char *str2)
{
	if (*str1 != *str2)
		return (*str1 - *str2);
	else if (!(*str1) && !(*str2))
		return (0);
	else
		return (ft_strcmp(str1 + 1, str2 + 1));
}
