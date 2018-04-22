/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 11:03:09 by eneto             #+#    #+#             */
/*   Updated: 2016/09/09 11:13:29 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

# define T_STOCK_PAR

typedef struct	s_stock_par
{
	int			size_params;
	char		*str;
	char		*copy;
	char		**tab;
}				t_stock_par;
#endif
