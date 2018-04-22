/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 02:59:46 by eneto             #+#    #+#             */
/*   Updated: 2016/09/04 04:21:02 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_line1(int size, int type)
{
	int		i;
	char	letter1;
	char	letter2;

	letter1 = 'A';
	letter2 = 'C';
	i = 0;
	while (i < size)
	{
		if ((i == 0 || i == size - 1) && type == 0)
		{
			ft_putchar(letter1);
			letter1 += 2;
		}
		else if ((i == 0 || i == size - 1) && type == 1)
		{
			ft_putchar(letter2);
			letter2 -= 2;
		}
		else
			ft_putchar('B');
		i++;
	}
	if (i == size)
		ft_putchar('\n');
}

void	print_line2(int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (i == 0 || i == size - 1)
			ft_putchar('B');
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
		if (i == 0)
			print_line1(x, 0);
		else if (i == y - 1)
			print_line1(x, 1);
		else
			print_line2(x);
		i++;
	}
}
