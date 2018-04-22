/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 00:42:07 by eneto             #+#    #+#             */
/*   Updated: 2016/09/14 06:04:49 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;
	void	*adr;

	tmp = *begin_list;
	while (tmp->next)
	{
		adr = tmp->next;
		free(tmp->data);
		free(tmp);
		tmp = adr;
	}
	free(tmp->data);
	free(tmp);
	tmp = NULL;
	*begin_list = NULL;
}
