/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 11:13:02 by eneto             #+#    #+#             */
/*   Updated: 2016/09/16 12:34:53 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
						int (*cmpf)(void *, void *))
{
	t_btree *temp;

	if (!root)
		return ;
	temp = *root;
	if ((*cmpf)(item, temp->item) < 0)
	{
		if (temp->left == 0)
		{
			temp->left = btree_create_node(item);
			return ;
		}
		temp = temp->left;
		btree_insert_data(&temp, item, cmpf);
	}
	else
	{
		if (temp->right == 0)
		{
			temp->right = btree_create_node(item);
			return ;
		}
		temp = temp->right;
		btree_insert_data(&temp, item, cmpf);
	}
}
