/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 14:33:39 by eneto             #+#    #+#             */
/*   Updated: 2016/09/12 21:11:44 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

int		*ft_map(int *tab, int length, int (*f)(int));

int		ft_any(char **tab, int (*f)(char *c));

void	ft_putnbr(int tab);

int		times_2(int x);

int		ft_str_5(char *str);

int		ft_count_if(char **tab, int (*f)(char *));

int		ft_is_sort(int *tab, int lenth, int (*f)(int, int));

int		compare_int(int a, int b);

void	ft_check_foreach()
{
	int tab[5] = {1, 2, 3, 4, 5};
	void (*F)(int);
	int i;

	printf("\n---------------ex01---------------\n");
	F = &ft_putnbr;;
	ft_foreach(tab, 5, F);
	i = 0;
}

void	ft_check_map()
{
	int tab[5] = {1, 2, 3, 4, 5};
	int (*f)(int);
	int i;
	
	printf("\n---------------ex02---------------\n");
	f = &times_2;
	i = 0;
	while (i < 5)
	{
		printf("%d ", ft_map(tab, 5, f)[i]);
		i++;
	}
}

void	ft_check_any()
{
	int (*f)(char *);
	char **str;

	str = (char **)malloc(sizeof(char *) * 4);
	str[0] = (char *)malloc(sizeof(char) * 10);
	strcpy(str[0], "mopa");
	str[1] = (char *)malloc(sizeof(char) * 10);
	strcpy(str[1], "capi");
	str[2] = (char *)malloc(sizeof(char) * 10);
	strcpy(str[2], "kao");
	

	printf("\n---------------ex03---------------\n");
	f = &ft_str_5;
	printf("%d", ft_any(str, f));
}

void	ft_check_if()
{
	int (*f)(char *);
	char **str;

	str = (char **)malloc(sizeof(char *) * 4);
	str[0] = (char *)malloc(sizeof(char) * 10);
	strcpy(str[0], "mopas");
	str[1] = (char *)malloc(sizeof(char) * 10);
	strcpy(str[1], "casaspi");
	str[2] = (char *)malloc(sizeof(char) * 10);
	strcpy(str[2], "kaasdaso");
	

	printf("\n---------------ex04---------------\n");
	f = &ft_str_5;
	printf("%d", ft_count_if(str, f));
}

void	ft_check_is_sort()
{
	int (*f)(int, int);
	int tab[5] = {1, 2, 3, -1, 5}; 
	
	f = &compare_int;
	printf("\n---------------ex05---------------\n");
	printf("%d", ft_is_sort(tab, 5, f));
}
