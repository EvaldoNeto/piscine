/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 15:58:43 by eneto             #+#    #+#             */
/*   Updated: 2016/09/17 23:41:03 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	print_line1(int size, int i)
{
	if (i == 0 || i == size - 1)
		return ('o');
	else if (i > 0 && i < size - 1)
		return ('-');
	else
		return ('\n');
}

char	print_line2(int size, int i)
{
	if (i == 0 || i == size - 1)
		return ('|');
	else if (i > 0 && i < size - 1)
		return (' ');
	else
		return ('\n');
}

int		is_colle00(char **str, int x, int y)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (str[i])
	{
		while (str[i][j])
		{
			if (i == 0 || i == y - 1)
			{
				if (print_line1(x, j) != str[i][j])
					return (0);
			}
			else
			{
				if (print_line2(x, j) != str[i][j])
					return (0);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
