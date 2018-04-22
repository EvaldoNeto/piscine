/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 03:08:56 by eneto             #+#    #+#             */
/*   Updated: 2016/09/06 19:53:31 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	to_upcase(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		if (str[i - 1] > 47 && str[i - 1] < 58)
			str[i] += 32;
		else if (str[i - 1] > 96 && str[i - 1] < 123)
			str[i] += 32;
		else if (str[i - 1] > 64 && str[i - 1] < 91)
			str[i] += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < 48 || (str[i - 1] > 57 && str[i - 1] < 65))
				str[i] -= 32;
			else if ((str[i - 1] > 90 && str[i - 1] < 97) || str[i - 1] > 122)
				str[i] -= 32;
		}
		to_upcase(str, i);
	}
	return (str);
}
