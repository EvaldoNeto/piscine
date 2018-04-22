/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 11:00:46 by eneto             #+#    #+#             */
/*   Updated: 2016/09/06 17:18:43 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int aux1;
	int aux2;

	aux1 = nb;
	aux2 = 1;
	if (nb < 0)
	{
		ft_putchar('-');
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
		ft_putchar(aux1 + '0');
	}
}
