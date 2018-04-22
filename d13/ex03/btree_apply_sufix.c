/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_sufix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 10:56:55 by eneto             #+#    #+#             */
/*   Updated: 2016/09/16 15:02:20 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_sufix(t_btree *root, void (*applyf)(void *))
{
	if (root)
	{
		btree_apply_sufix(root->left, applyf);
		btree_apply_sufix(root->right, applyf);
		(*applyf)(root->item);
	}
}
