/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 17:51:31 by eneto             #+#    #+#             */
/*   Updated: 2016/09/14 16:39:16 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;
	t_list *aux;

	tmp = *begin_list;
	if (tmp)
	{
		aux = ft_create_elem(data);
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = aux;
	}
	else
	{
		tmp = ft_create_elem(data);
	}
}
