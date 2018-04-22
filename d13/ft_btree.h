/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 01:44:57 by eneto             #+#    #+#             */
/*   Updated: 2016/09/16 15:21:35 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include <stdlib.h>

typedef struct		s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}					t_btree;

t_btree				*btree_create_node(void *item);
void				*btree_search_item(t_btree *root, void *data_ref,
										int (*cmpf)(void *, void *));
void				btree_apply_prefix(t_btree *root, void (*applyf)(void *));
void				btree_apply_infix(t_btree *root, void (*applyf)(void *));
void				btree_apply_sufix(t_btree *root, void (*applyf)(void *));
void				btree_insert_data(t_btree **root, void *item, int(*cmpf)(void *, void *));

void				ft_check_create_node();
void				ft_check_apply_prefix();
void				ft_check_apply_infix();
void				ft_check_apply_sufix();
void				ft_check_insert_data();
void				ft_check_search_item();

int					ft_putchar(char c);
void				ft_putstr(void *str);
int					ft_strcmp(void *s1, void *s2);

#endif
