/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 02:39:02 by eneto             #+#    #+#             */
/*   Updated: 2016/09/06 05:35:24 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int counter;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		if (*(str + counter) >= 'A' && *(str + counter) <= 'Z')
			*(str + counter) += 32;
		counter++;
	}
	return (str);
}
