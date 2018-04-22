/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 21:11:30 by eneto             #+#    #+#             */
/*   Updated: 2016/09/13 22:17:36 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*aux;
	t_list	*tmp;
	void	*tmp2;

	tmp = *begin_list;
	if (tmp)
	{
		aux = ft_create_elem(data);
		tmp2 = aux;
		while (tmp->next)
		{
			tmp2 = aux->data;
			aux->data = tmp->data;
			tmp->data = tmp2;
			tmp = tmp->next;
		}
		tmp->next = aux;
		tmp2 = aux->data;
		aux->data = tmp->data;
		tmp->data = tmp2;
	}
	else
		*begin_list = ft_create_elem(data);
}
