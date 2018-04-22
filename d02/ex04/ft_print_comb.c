/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 02:02:18 by eneto             #+#    #+#             */
/*   Updated: 2016/09/01 18:20:16 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	put_char1(char c[4])
{
	ft_putchar(c[0]);
	ft_putchar(c[1]);
	ft_putchar(c[2]);
	ft_putchar(',');
	ft_putchar(' ');
}

void	put_char2(char c[4])
{
	ft_putchar(c[0]);
	ft_putchar(c[1]);
	ft_putchar(c[2]);
}

void	ft_print_comb(void)
{
	char n[4];

	n[0] = '0';
	n[1] = '1';
	n[2] = '2';
	while (n[0] <= '7')
	{
		if (n[0] < n[1] && n[1] < n[2])
		{
			(n[0] < '7') ? put_char1(n) : put_char2(n);
		}
		n[2]++;
		if (n[2] > '9' && n[1] < '8')
		{
			n[1]++;
			n[2] = n[1] + 1;
		}
		if (n[1] >= '8')
		{
			n[0]++;
			n[1] = n[0] + 1;
			n[2] = n[1] + 1;
		}
	}
}
