/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 02:55:41 by eneto             #+#    #+#             */
/*   Updated: 2016/09/02 22:57:27 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	sign;
	int number;
	int no_num;

	number = 0;
	no_num = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else
		sign = 1;
	while (*str != '\0')
	{
		if ((*str - '0' > 9 || *str - '0' < 0) && *str != '.')
			no_num = 0;
		if (*str != '.')
			number = 10 * number + (*str - '0');
		else
			sign = sign * number;
		str++;
	}
	number = sign;
	return (number * no_num);
}
