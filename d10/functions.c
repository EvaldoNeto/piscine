/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 16:21:05 by eneto             #+#    #+#             */
/*   Updated: 2016/09/12 21:07:32 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void    ft_putnbr(int tab)
{
    char c;

    c =tab + '0';
    write(1, &c, 1);
}

int		times_2(int x)
{
    return (2*x);
}

//Returns 1 if the str has 5 or more char, 0 otherwise
int		ft_str_5(char *str)
{
	int	counter;

	counter = 0;
	while(*str)
	{
		str++;
		counter++;
	}
	return (counter >= 5) ? 1 : 0;
}

int		compare_int (int a, int b)
{
	return (a - b);
}
