/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 14:06:09 by eneto             #+#    #+#             */
/*   Updated: 2016/09/16 16:37:56 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

void		ft_check_create_node()
{
	t_btree *tree;
	char *str = "MOPA";
	char *str1 = "HOMOPS";
	char *str2 = "CAP";

	printf("\n---------------------ex00----------------------\n");
	tree = btree_create_node(str);
	tree->left = btree_create_node(str1);
	tree->right = btree_create_node(str2);
	printf("               %s\n", tree->item);
	printf("%s          ", (tree->left)->item);
	printf("          %s\n", (tree->right)->item); 
}

void		ft_check_apply_prefix()
{
	t_btree *tree;
	char *str = "MOPA";
	char *str1 = "HOMOPS";
	char *str2 = "CAP";
	void (*f)(void *);

	printf("\n---------------------ex01----------------------\n");
	tree = btree_create_node(str);
	tree->left = btree_create_node(str1);
	tree->left->left = btree_create_node("kakaroto");
	tree->left->right = btree_create_node("gogogogo");
	tree->right = btree_create_node(str2);
	tree->right->left = btree_create_node("jumancia");
	tree->right->right = btree_create_node("porpeta");
	f = &ft_putstr;
	btree_apply_prefix(tree, f);
}

void		ft_check_apply_infix()
{
	t_btree *tree;
	char *str = "MOPA";
	char *str1 = "HOMOPS";
	char *str2 = "CAP";
	void (*f)(void *);

	printf("\n---------------------ex02----------------------\n");
	tree = btree_create_node(str);
	tree->left = btree_create_node(str1);
	tree->left->left = btree_create_node("kakaroto");
	tree->left->right = btree_create_node("gogogogo");
	tree->right = btree_create_node(str2);
	tree->right->left = btree_create_node("jumancia");
	tree->right->right = btree_create_node("porpeta");
	f = &ft_putstr;
	btree_apply_infix(tree, f);
}

void		ft_check_apply_sufix()
{
	t_btree *tree;
	char *str = "MOPA";
	char *str1 = "HOMOPS";
	char *str2 = "CAP";
	void (*f)(void *);

	printf("\n---------------------ex03----------------------\n");
	tree = btree_create_node(str);
	tree->left = btree_create_node(str1);
	tree->left->left = btree_create_node("kakaroto");
	tree->left->right = btree_create_node("gogogogo");
	tree->right = btree_create_node(str2);
	tree->right->left = btree_create_node("jumancia");
	tree->right->right = btree_create_node("porpeta");
	f = &ft_putstr;
	btree_apply_sufix(tree, f);
}

void		ft_check_insert_data()
{
	t_btree *tree;
	char *str = "ectoplasma";
	char *str1 = "dig din";
	char *str2 = "foda";
	void (*f)(void *);
	int (*g)(void *, void *);

	printf("\n---------------------ex04----------------------\n");
	tree = btree_create_node(str);
	tree->left = btree_create_node(str1);
	tree->left->left = btree_create_node("bucefalo");
	tree->left->right = btree_create_node("dito");
	tree->right = btree_create_node(str2);
	tree->right->left = btree_create_node("fac");
	tree->right->right = btree_create_node("porpeta");
	f = &ft_putstr;
	g = &ft_strcmp;
	btree_insert_data(&tree, "abc", g);
	btree_apply_prefix(tree, f);
}

void		ft_check_search_item()
{
	t_btree *tree;
	char *str = "ectoplasma";
	char *str1 = "dig din";
	char *str2 = "foda";
	void (*f)(void *);
	int (*g)(void *, void *);
	t_btree *test;

	printf("\n---------------------ex05----------------------\n");
	test = malloc(50);
	tree = btree_create_node(str);
	tree->left = btree_create_node(str1);
	tree->left->left = btree_create_node("bucefalo");
	tree->left->right = btree_create_node("dito");
	tree->right = btree_create_node(str2);
	tree->right->left = btree_create_node("fac");
	tree->right->right = btree_create_node("porpeta");
	f = &ft_putstr;
	g = &ft_strcmp;
	test = btree_search_item(tree, str2, g);
	btree_apply_prefix(test, f);
	//ft_putstr(test);
	//printf("%s\n", test);
}
