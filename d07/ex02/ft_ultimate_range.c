/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 21:08:33 by eneto             #+#    #+#             */
/*   Updated: 2016/09/08 13:46:15 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
	{
		*range = (int *)malloc(1);
		**range = (int)NULL;
		return (0);
	}
	else
	{
		i = min;
		*range = (int *)malloc(sizeof(int) *
				(unsigned int)(max - min) + sizeof(int));
		while (i < max)
		{
			*(*range + (unsigned int)(i - min)) = i;
			i++;
		}
		return (max - min);
	}
}
