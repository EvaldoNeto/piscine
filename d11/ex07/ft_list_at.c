/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 06:11:00 by eneto             #+#    #+#             */
/*   Updated: 2016/09/14 06:29:05 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int		i;
	t_list				*aux;

	i = 1;
	aux = begin_list;
	while (i <= nbr)
	{
		if (!(aux->next))
			return (aux->next);
		aux = aux->next;
		i++;
	}
	return (aux);
}
