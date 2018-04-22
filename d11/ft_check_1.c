/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 23:28:26 by eneto             #+#    #+#             */
/*   Updated: 2016/09/14 21:22:05 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"
#include <string.h>

void	ft_check_list_push_params(int ac, char **arv)
{
    t_list *list;
    int i;

	i = 1;
	list = ft_list_push_params(ac, arv);
    printf("\n--------------------ex05--------------------\n");
	while (i < ac)
	{
		printf("%s\n", list->data);
		list = list->next;
		i++;
	}
}

void	ft_check_list_clear()
{
    char *str = malloc(10);
    char *str1 = malloc(10);
	char *str2 = malloc(10);
    t_list *list = ft_create_elem(str);

    printf("\n--------------------ex06-------------------\n");
	strcpy(str, "mopa");
	strcpy(str1, "test2");
	strcpy(str2, "capi");
    ft_list_push_front(&list, str1);
    ft_list_push_front(&list, str2);
	ft_list_clear(&list);
	if (!list)
		printf("NULL\n");
}

void	ft_check_list_at()
{
	char *str = malloc(10);
    char *str1 = malloc(10);
	char *str2 = malloc(10);
    t_list *list = ft_create_elem(str);
	t_list *aux;

    printf("\n--------------------ex07-------------------\n");
	strcpy(str, "mopa");
	strcpy(str1, "test2");
	strcpy(str2, "capi");
    ft_list_push_front(&list, str1);
    ft_list_push_front(&list, str2);
	aux = ft_list_at(list, 4);
	if (!aux)
		printf("NULL!\n");
	else
		printf("%s\n", aux->data);
		
}

void	ft_check_list_reverse()
{
	char *str = malloc(10);
    char *str1 = malloc(10);
	char *str2 = malloc(10);
	char *str3 = malloc(10);
    t_list *list;
	t_list *mopa;

    printf("\n--------------------ex08-------------------\n");
	strcpy(str, "mopa");
	strcpy(str1, "test2");
	strcpy(str2, "capi");
	strcpy(str3, "beer");
	list = ft_create_elem(str);
	mopa = ft_create_elem(str);
    ft_list_push_front(&list, str1);
    ft_list_push_front(&list, str2);
	ft_list_push_front(&list, str3);
	ft_list_push_front(&mopa, str1);
    ft_list_push_front(&mopa, str2);
	ft_list_push_front(&mopa, str3);
	ft_list_reverse(&mopa);
	while (mopa->next)
	{
		printf("%s : %s\n", mopa->data, list->data);
		mopa = mopa->next;
		list = list->next;
	}
	printf("%s : %s\n", mopa->data, list->data);
}

void	ft_check_list_foreach()
{
	char *str = malloc(10);
    char *str1 = malloc(10);
	char *str2 = malloc(10);
	char *str3 = malloc(10);
    t_list *list;
	void (*f)(void *);

    printf("\n--------------------ex09-------------------\n");
	strcpy(str, "mopa");
	strcpy(str1, "test2");
	strcpy(str2, "capi");
	strcpy(str3, "beer");
	list = ft_create_elem(str);	
	ft_list_push_front(&list, str1);
    ft_list_push_front(&list, str2);
	ft_list_push_front(&list, str3);
	f = &ft_putstr;
	ft_list_foreach(list, f);
}
