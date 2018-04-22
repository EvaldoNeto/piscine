/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 12:32:46 by eneto             #+#    #+#             */
/*   Updated: 2016/09/16 16:38:34 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
							int (*cmpf)(void *, void *))
{
	if (!root)
		return (0);
	if ((*cmpf)(data_ref, root->item) == 0)
		return (root);
	else if (btree_search_item(root->left, data_ref, cmpf) != 0)
		return (btree_search_item(root->left, data_ref, cmpf));
	else
		return (btree_search_item(root->right, data_ref, cmpf));
}
