/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 23:11:48 by eneto             #+#    #+#             */
/*   Updated: 2016/09/13 23:48:46 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;
	t_list	*tmp;
	t_list	*adress;

	i = ac - 1;
	list = ft_create_elem(av[i]);
	adress = list;
	while (i > 1)
	{
		tmp = ft_create_elem(av[i - 1]);
		list->next = tmp;
		list = tmp;
		list->data = tmp->data;
		i--;
	}
	return (adress);
}
