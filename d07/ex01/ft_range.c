/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 17:47:08 by eneto             #+#    #+#             */
/*   Updated: 2016/09/08 13:34:32 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *ptr;
	int i;

	i = min;
	ptr = (int *)malloc(sizeof(int) * (unsigned int)(max - min) + sizeof(int));
	if (min >= max)
		return ((int *)NULL);
	else
	{
		while (i < max && ptr != (int *)NULL)
		{
			*(ptr + (unsigned int)(i - min)) = i;
			i++;
		}
		return (ptr);
	}
}
