/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_even.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 04:35:28 by eneto             #+#    #+#             */
/*   Updated: 2016/09/09 05:18:50 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex02/ft_boolean.h"

t_bool	ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}
