/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 13:59:44 by eneto             #+#    #+#             */
/*   Updated: 2016/09/16 15:21:55 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		main(void)
{
	ft_check_create_node();
	ft_check_apply_prefix();
	ft_check_apply_infix();
	ft_check_apply_sufix();
	ft_check_insert_data();
	ft_check_search_item();

	return (0);
}
