/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 23:31:54 by eneto             #+#    #+#             */
/*   Updated: 2016/09/08 18:29:36 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen_1(char *str)
{
	int counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}

char	*ft_strcat(char *dest, char *src, int n)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	if (n == 0)
		*(dest + i + j) = '\0';
	else if (n == 1)
	{
		*(dest + i + j) = '\n';
		*(dest + i + j + 1) = '\0';
	}
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		size;
	int		i;

	i = 1;
	size = 0;
	while (i < argc)
	{
		size += ft_strlen_1(argv[i]);
		i++;
	}
	str = (char *)malloc(size + i - 1);
	i = 1;
	while (i < argc)
	{
		if (i < argc - 1)
			str = ft_strcat(str, argv[i], 1);
		else
			str = ft_strcat(str, argv[i], 0);
		i++;
	}
	return (str);
}
