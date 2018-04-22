/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 17:05:44 by eneto             #+#    #+#             */
/*   Updated: 2016/09/06 05:32:22 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int counter;

	counter = 0;
	while (*(src + counter) != '\0')
	{
		*(dest + counter) = *(src + counter);
		if (*(dest + counter) == '\0')
			*(dest + 1) = 1;
		counter++;
	}
	*(dest + counter) = '\0';
	return (dest);
}
