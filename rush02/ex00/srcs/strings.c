/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 18:31:32 by eneto             #+#    #+#             */
/*   Updated: 2016/09/18 01:37:47 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	if (str)
	{
		if (str[0] == '\0')
			return (0);
		else
			return (1 + ft_strlen(str + 1));
	}
	else
		return (0);
}

int		ft_tab_size(char **str)
{
	int		counter;

	counter = 0;
	if (*str)
	{
		while (*str)
		{
			counter++;
			str++;
		}
		return (counter);
	}
	else
		return (0);
}

void	read_to_string(char **str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (read(0, &c, 1))
	{
		str[i][j] = c;
		j++;
		if (c == '\n')
		{
			str[i + 1] = (char *)malloc(sizeof(char) * j);
			str[i][j] = '\0';
			i++;
			j = 0;
		}
	}
	str[i] = NULL;
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	int		aux1;
	int		aux2;
	char	c;

	aux1 = nb;
	aux2 = 1;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		aux1 = nb;
	}
	while (aux1 > 9)
	{
		aux1 = aux1 / 10;
		aux2 = 10 * aux2;
	}
	while (nb > 0 || aux2 > 0)
	{
		aux1 = nb / aux2;
		nb = nb - aux1 * aux2;
		aux2 = aux2 / 10;
		c = aux1 + '0';
		write(1, &c, 1);
	}
}
