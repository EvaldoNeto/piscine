/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 13:53:30 by eneto             #+#    #+#             */
/*   Updated: 2016/09/06 05:31:43 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static	int	isspace(char c)
{
	if (c == '\n' || c == ' ' || c == '\v' ||
		c == '\t' || c == '\r' || c == '\f')
		return (1);
	return (0);
}

int			ft_atoi(char *str)
{
	int	sign;
	int number;

	number = 0;
	sign = 1;
	while (isspace(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+')
		str++;
	while (*str != '\0')
	{
		if (*str - '0' <= 9 && *str - '0' >= 0)
			number = 10 * number + (*str - '0');
		else
			break ;
		str++;
	}
	return (number * sign);
}
