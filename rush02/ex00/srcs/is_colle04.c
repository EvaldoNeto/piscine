/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_colle04.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 20:07:41 by eneto             #+#    #+#             */
/*   Updated: 2016/09/18 00:07:44 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	print_line1_04(int size, int type, int i)
{
	if ((i == 0 || i == size - 1) && type == 0)
	{
		if (i == 0)
			return ('A');
		else
			return ('C');
	}
	else if ((i == 0 || i == size - 1) && type == 1)
	{
		if (i == 0)
			return ('C');
		else
			return ('A');
	}
	else if (i > 0 && i < size - 1)
		return ('B');
	else
		return ('\n');
}

char	print_line2_04(int size, int i)
{
	if (i == 0 || i == size - 1)
		return ('B');
	else if (i > 0 && i < size - 1)
		return (' ');
	else
		return ('\n');
}

int		conditions_04(char **str, int x, int y, int i[2])
{
	if (i[0] == 0)
	{
		if (str[i[0]][i[1]] != print_line1_04(x, 0, i[1]))
			return (0);
	}
	else if (i[0] == y - 1)
	{
		if (str[i[0]][i[1]] != print_line1_04(x, 1, i[1]))
			return (0);
	}
	else
	{
		if (str[i[0]][i[1]] != print_line2_04(x, i[1]))
			return (0);
	}
	return (1);
}

int		is_colle04(char **str, int x, int y)
{
	int i[2];

	i[0] = 0;
	i[1] = 0;
	while (str[i[0]])
	{
		while (str[i[0]][i[1]])
		{
			if (!conditions_04(str, x, y, i))
				return (0);
			i[1]++;
		}
		i[1] = 0;
		i[0]++;
	}
	return (1);
}
