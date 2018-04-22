/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 17:12:15 by eneto             #+#    #+#             */
/*   Updated: 2016/09/08 18:36:51 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_check_strdup();
void	ft_check_range();
void	ft_check_ultimate_range();
void	ft_check_concat_params();
void	ft_check_split_whitespaces();

int		main(int argc, char **argv)
{
	//ft_check_strdup();
	//ft_check_range();
	//ft_check_ultimate_range();
	ft_check_concat_params(argc, argv);
	ft_check_split_whitespaces();
	return (0);
}
