/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 11:08:28 by eneto             #+#    #+#             */
/*   Updated: 2016/09/14 22:38:46 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_check_create_elem();
void	ft_check_list_push_back();
void	ft_check_list_push_front();
void	ft_check_list_size();
void	ft_check_list_last();
void	ft_check_list_push_params(int ac, char **arv);
void	ft_check_list_clear();
void	ft_check_list_at();
void	ft_check_list_reverse();
void	ft_check_list_foreach();
void	ft_check_list_foreach_if();
void	ft_check_list_find();
		
int		main(int ac, char **arv)
{
	ft_check_create_elem();
	ft_check_list_push_back();
	ft_check_list_push_front();
	ft_check_list_size();
	ft_check_list_last();
	ft_check_list_push_params(ac, arv);
	ft_check_list_clear();
	ft_check_list_at();
	ft_check_list_reverse();
	ft_check_list_foreach();
	ft_check_list_foreach_if();
	ft_check_list_find();
	return (0);
}
