/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 22:31:16 by eneto             #+#    #+#             */
/*   Updated: 2016/09/14 23:32:29 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *aux;

	aux = begin_list;
	while (aux)
	{
		if ((*cmp)(aux->data, data_ref) == 0)
			return (aux);
		aux = aux->next;
	}
	return (0);
}
