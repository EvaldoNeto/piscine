/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 20:06:05 by eneto             #+#    #+#             */
/*   Updated: 2016/09/02 02:52:34 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
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

char	*ft_strrev(char *str)
{
	char	temp;
	int		counter;
	int		size_str;

	size_str = ft_strlen(str);
	counter = 0;
	while (counter < size_str / 2)
	{
		temp = *(str + counter);
		*(str + counter) = *(str + size_str - counter - 1);
		*(str + size_str - counter - 1) = temp;
		counter++;
	}
	return (str);
}
