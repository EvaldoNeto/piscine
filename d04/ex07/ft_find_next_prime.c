/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 11:20:29 by eneto             #+#    #+#             */
/*   Updated: 2016/09/04 15:22:45 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime2(int nb)
{
	int temp;

	temp = 2;
	if (nb > 1 || nb < -1)
	{
		if (nb < 0)
		{
			nb = 4;
		}
		while (nb % temp != 0 && temp <= nb / 2)
		{
			temp++;
		}
		return (temp <= nb / 2) ? 0 : 1;
	}
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	return (ft_is_prime2(nb)) ? nb : ft_find_next_prime(nb + 1);
}
