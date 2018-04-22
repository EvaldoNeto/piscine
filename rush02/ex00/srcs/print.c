/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 01:40:30 by eneto             #+#    #+#             */
/*   Updated: 2016/09/18 02:12:56 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lib_colle.h"

void	col_print(char *str, int nb1, int nb2, int *flag)
{
	if (*flag == 0)
	{
		ft_putstr("[");
		ft_putstr(str);
		ft_putstr("] [");
		ft_putnbr(nb1);
		ft_putstr("] [");
		ft_putnbr(nb2);
		ft_putstr("]");
		*flag = 1;
	}
	else if (*flag == 1)
	{
		ft_putstr(" || [");
		ft_putstr(str);
		ft_putstr("] [");
		ft_putnbr(nb1);
		ft_putstr("] [");
		ft_putnbr(nb2);
		ft_putstr("]");
	}
}
