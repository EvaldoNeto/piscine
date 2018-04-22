/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 00:33:34 by eneto             #+#    #+#             */
/*   Updated: 2016/09/03 01:08:39 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index >= 0)
		if (index < 2)
			return (index);
		else
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else
		return (-1);
}
