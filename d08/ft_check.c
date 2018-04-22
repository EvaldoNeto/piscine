/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 06:04:58 by eneto             #+#    #+#             */
/*   Updated: 2016/09/09 10:45:45 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex02/ft_boolean.h"
#include "ex03/ft_abs.h"
#include "ex04/ft_point.h"
#include <stdio.h>

void	ft_putstr(char *str);
t_bool	ft_is_even(int bbr);
int		nb_words(char *str);
char	**ft_split_whitespaces(char *str);
void	set_point(t_point *point);

void	ft_check_split_whitespaces()
{
    char str[] = "             asdasd          ";
    int i;
    int size;
    char **tab;

    i = 0;
    size = nb_words(str);
    printf("-------------------------Ex00-------------------------\n");
    printf("number of words: %d\n", nb_words(str));
    tab = ft_split_whitespaces(str);
    printf("Original string: %s\n", str);
    while (i <= size)
    {
        printf("%s\n", *(tab + i));
        i++;
    }	
}

int		ft_check_boolean(int argc, char **argv)
{
	printf("-------------------------Ex01-------------------------\n");
	(void)argv;
	if (ft_is_even(argc - 1) == TRUE)
		ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);
	return (SUCCESS);
}

void	ft_check_abs()
{
	int i;
	int j;

	printf("-------------------------Ex02-------------------------\n");
	i = 5;
	j = -42;
	printf("ABS(%d) = %d\nABS(%d) = %d\n", i, ABS(i), j, ABS(j));
}

void	ft_check_point()
{
	t_point point;

	printf("-------------------------Ex03-------------------------\n");
	set_point(&point);
	printf("x: %d\ny: %d\n", point.x, point.y);
}
