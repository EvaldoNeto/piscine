/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 22:58:06 by eneto             #+#    #+#             */
/*   Updated: 2016/09/14 23:28:36 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(tlist **begin_list, void *data_ref, int(*cmp)());
{
	t_list *current;
	t_list *next;
	t_list *prev;

	current = *begin_list;
	prev = *begin_list;
	while (current)
	{
		next = current->next;
		if ((*cmp)(current->data, data_ref))
		{
			free(current->data);
			free(current);
		}
		else
			prev = prev->next;
		current = next;
	}
}
