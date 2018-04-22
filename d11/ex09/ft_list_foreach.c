/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 20:49:10 by eneto             #+#    #+#             */
/*   Updated: 2016/09/14 21:23:47 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *aux;

	aux = begin_list;
	while (aux->next)
	{
		(*f)(aux->data);
		aux = aux->next;
	}
	(*f)(aux->data);
}
