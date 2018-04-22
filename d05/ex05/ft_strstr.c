/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 19:00:15 by eneto             #+#    #+#             */
/*   Updated: 2016/09/06 17:54:35 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int j;
	int flag;

	j = 0;
	flag = 0;
	while (*str != '\0' && *(to_find + j) != '\0')
	{
		if (*str == *to_find)
		{
			while (*(to_find + j) != '\0' && *(str + j) == *(to_find + j))
			{
				j++;
				if (*(to_find + j) == '\0')
					flag = 1;
			}
		}
		if (*(to_find + j) != '\0')
		{
			j = 0;
			str++;
		}
	}
	return (flag == 1) ? str : 0;
}
