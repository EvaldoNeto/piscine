/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 14:05:38 by eneto             #+#    #+#             */
/*   Updated: 2016/09/18 02:40:14 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "includes/lib_colle.h"

int		main(void)
{
	char	**str;
	int		flag;
	int		nb_lin;
	int		nb_col;

	flag = 0;
	str = (char **)malloc(sizeof(char *) * 200);
	str[0] = (char *)malloc(sizeof(char) * 100);
	read_to_string(str);
	nb_lin = ft_tab_size(str);
	if (ft_strlen(str[0]) != 0)
		nb_col = ft_strlen(str[0]) - 1;
	if (is_colle00(str, ft_strlen(str[0]) - 1, ft_tab_size(str)) && nb_lin*nb_col != 0)
		col_print("colle-00", nb_col, nb_lin, &flag);
	if (is_colle01(str, ft_strlen(str[0]) - 1, ft_tab_size(str)) && nb_lin*nb_col != 0)
		col_print("colle-01", nb_col, nb_lin, &flag);
	if (is_colle02(str, ft_strlen(str[0]) - 1, ft_tab_size(str)) && nb_lin*nb_col != 0)
		col_print("colle-02", nb_col, nb_lin, &flag);
	if (is_colle03(str, ft_strlen(str[0]) - 1, ft_tab_size(str)) && nb_lin*nb_col != 0)
		col_print("colle-03", nb_col, nb_lin, &flag);
	if (is_colle04(str, ft_strlen(str[0]) - 1, ft_tab_size(str)) && nb_lin*nb_col != 0)
		col_print("colle-04", nb_col, nb_lin, &flag);
	if (flag == 0)
		ft_putstr("ERROR MESSAGE");
	ft_putstr("\n");
	return (0);
}
