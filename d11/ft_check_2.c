/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 21:54:26 by eneto             #+#    #+#             */
/*   Updated: 2016/09/14 22:46:06 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"
#include <string.h>

void    ft_check_list_foreach_if()
{
    char *str = malloc(10);
    char *str1 = malloc(10);
    char *str2 = malloc(10);
    char *str3 = malloc(10);
    t_list *list;
    void (*f)(void *);
	int (*cmp)();

    printf("\n--------------------ex10-------------------\n");
    strcpy(str, "mopa");
    strcpy(str1, "test2");
    strcpy(str2, "capi");
    strcpy(str3, "beer");
    list = ft_create_elem(str);
    ft_list_push_front(&list, str1);
    ft_list_push_front(&list, str2);
    ft_list_push_front(&list, str3);
    f = &ft_putstr;
	cmp = &ft_strcmp;
    ft_list_foreach_if(list, f, str, cmp);
}

void	ft_check_list_find()
{
    char *str = malloc(10);
    char *str1 = malloc(10);
    char *str2 = malloc(10);
    char *str3 = malloc(10);
    t_list *list;
    void (*f)(void *);
	int (*cmp)();
	t_list *aux;

    printf("\n--------------------ex11-------------------\n");
    strcpy(str, "mopa");
    strcpy(str1, "test2");
    strcpy(str2, "capi");
    strcpy(str3, "beer");
    list = ft_create_elem(str);
    ft_list_push_front(&list, str1);
    ft_list_push_front(&list, str2);
    ft_list_push_front(&list, str3);
    f = &ft_putstr;
	cmp = &ft_strcmp;
    aux = ft_list_find(list, str2, cmp);
	printf("%s\n", aux->data);
}
