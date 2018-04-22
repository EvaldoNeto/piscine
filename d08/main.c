/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 04:46:47 by eneto             #+#    #+#             */
/*   Updated: 2016/09/09 06:35:36 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_check_split_whitespaces();
int		ft_check_boolean(int argc, char **argv);
void	ft_check_abs();
void	ft_check_point();

int		main(int argc, char **argv)
{
	ft_check_split_whitespaces();
	ft_check_boolean(argc, argv);
	ft_check_abs();
	ft_check_point();
	return (0);
}
