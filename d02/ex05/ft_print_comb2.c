/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 04:46:35 by eneto             #+#    #+#             */
/*   Updated: 2016/09/01 18:21:40 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	put_char1(char c[5])
{
	ft_putchar(c[0]);
	ft_putchar(c[1]);
	ft_putchar(' ');
	ft_putchar(c[2]);
	ft_putchar(c[3]);
	ft_putchar(',');
	ft_putchar(' ');
}

void	put_char2(char c[5])
{
	ft_putchar(c[0]);
	ft_putchar(c[1]);
	ft_putchar(' ');
	ft_putchar(c[2]);
	ft_putchar(c[3]);
}

void	ft_print_comb2(void)
{
	char num[5];

	num[0] = '0';
	num[1] = '0';
	num[2] = '0';
	num[3] = '1';
	while (num[0] < '9' || num[1] < '9')
	{
		(num[0] == '9' && num[1] == '8') ? put_char2(num) : put_char1(num);
		num[3]++;
		if (num[3] > '9')
		{
			num[2]++;
			num[3] = '0';
		}
		if (num[2] > '9')
		{
			num[1]++;
			num[3] = num[1] + 1;
			num[2] = num[0];
			if (num[1] > '9')
			{
				num[0]++;
				num[1] = '0';
			}
		}
	}
}
