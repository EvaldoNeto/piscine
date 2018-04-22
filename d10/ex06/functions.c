/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 21:21:17 by eneto             #+#    #+#             */
/*   Updated: 2016/09/13 03:10:41 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

static	int isspace(char c)
{
	if (c == '\n' || c == ' ' || c == '\v' ||
		c == '\t' || c == '\r' || c == '\f')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int sign;
	int number;

	number = 0;
	sign = 1;
	while (isspace(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+')
		str++;
	while (*str)
	{
		if (*str - '0' <= 9 && *str - '0' >= 0)
			number = 10*number + (*str - '0');
		else
			break;
		str++;
	}
	return (number * sign);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	operation(int x, int y, char c)
{
	if (c == '+' || c == '-')
		printf("%d\n", x + y);
	else if (c == '*')
		printf("%d\n", x * y);
	else if (c == '/')
	{
		if (y == 0)
			printf("Stop : divisio by zero\n");
		else
			printf("%d", x / y);
	}
}
