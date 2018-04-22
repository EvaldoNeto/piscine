/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 16:34:09 by eneto             #+#    #+#             */
/*   Updated: 2016/09/07 17:45:05 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*ptr;

	length = ft_strlen(src);
	if (malloc(length + 1) != NULL)
	{
		ptr = (char *)malloc(length + 1);
		i = 0;
		while (i <= length)
		{
			*(ptr + i) = *(src + i);
			i++;
		}
		return (ptr);
	}
	else
		return (malloc(length + 1));
}
