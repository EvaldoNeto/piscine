/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 18:09:14 by eneto             #+#    #+#             */
/*   Updated: 2016/09/05 20:52:39 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	counter = 0;
	while (counter < n)
	{
		if (*(src + counter) != '\0')
			*(dest + counter) = *(src + counter);
		else
			*(dest + counter) = '\0';
		counter++;
	}
	return (dest);
}
