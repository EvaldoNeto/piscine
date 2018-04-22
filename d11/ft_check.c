/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 15:03:24 by eneto             #+#    #+#             */
/*   Updated: 2016/09/14 16:54:37 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

void	ft_check_create_elem()
{
	int *tab;
	t_list *list;
	int i;

	printf("\n--------------------ex00-------------------\n");
	tab = malloc(sizeof(int) * 3);
	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	i = 0;
	list = ft_create_elem(tab);
	while (i < 3)
	{
		printf("%d ", ((int *)list->data)[i]);
		i++;
	}
}

void	ft_check_list_push_back()
{
	char *str = "mopa";
	char *str1 = "test2";
	char *str2 = "capi";
	t_list *list = ft_create_elem(str);

	printf("\n--------------------ex01-------------------\n");
	ft_list_push_back(&list, str1);
	ft_list_push_back(&list, str2);
	while (list->next)
	{
		printf("%s\n",list->data);
		list = list->next;
	}
	printf("%s\n",list->data);
}

void	ft_check_list_push_front()
{
	char *str = "mopa";
	char *str1 = "test2";
	char *str2 = "capi";
	t_list *list = ft_create_elem(str);

	printf("\n--------------------ex02-------------------\n");
	ft_list_push_front(&list, str1);
	ft_list_push_front(&list, str2);
	while (list->next)
	{
		printf("%s\n",list->data);
		list = list->next;
	}
	printf("%s\n",list->data);
}

void	ft_check_list_size()
{
	char *str = "mopa";
	char *str1 = "test2";
	char *str2 = "capi";
	t_list *list = ft_create_elem(str);

	printf("\n--------------------ex03-------------------\n");
	ft_list_push_front(&list, str1);
	ft_list_push_front(&list, str2);
	printf("%d", ft_list_size(list));
}

void	ft_check_list_last()
{
	char *str = "mopa";
	char *str1 = "test2";
	char *str2 = "capi";
	t_list *list = ft_create_elem(str);
	t_list *mop;

	printf("\n--------------------ex04-------------------\n");
	ft_list_push_front(&list, str1);
	ft_list_push_front(&list, str2);
	mop = ft_list_last(list);
	printf("%s\n", mop->data);
}
