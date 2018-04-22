/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 11:35:09 by eneto             #+#    #+#             */
/*   Updated: 2016/09/06 12:02:52 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	else if (*str > 31)
		return (ft_str_is_printable(str + 1));
	else
		return (0);
}
