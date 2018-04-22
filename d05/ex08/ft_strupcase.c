/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 00:47:51 by eneto             #+#    #+#             */
/*   Updated: 2016/09/06 02:36:31 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int counter;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		if (*(str + counter) >= 'a' && *(str + counter) <= 'z')
		{
			*(str + counter) -= 32;
		}
		counter++;
	}
	return (str);
}
