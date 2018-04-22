/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 23:59:31 by eneto             #+#    #+#             */
/*   Updated: 2016/09/04 02:18:52 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_line1(int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (i == 0 || i == size - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
	if (i == size)
		ft_putchar('\n');
}

void	print_line2(int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (i == 0 || i == size - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
	if (i == size)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < y)
	{
		if (i == 0 || i == y - 1)
			print_line1(x);
		else
			print_line2(x);
		i++;
	}
}
