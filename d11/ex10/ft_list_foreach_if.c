/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 21:47:16 by eneto             #+#    #+#             */
/*   Updated: 2016/09/14 22:11:22 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
									void *data_ref, int (*cmp)())
{
	t_list	*aux;

	aux = begin_list;
	while (aux)
	{
		if ((*cmp)(aux->data, data_ref) == 0)
			(*f)(aux->data);
		aux = aux->next;
	}
}
