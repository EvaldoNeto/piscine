/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 16:42:57 by cbouvell          #+#    #+#             */
/*   Updated: 2016/09/17 23:52:38 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	print_line1_01(int size, int type, int i)
{
	if ((i == 0 || i == size - 1) && type == 0)
	{
		if (i == 0)
			return ('/');
		else
			return ('\\');
	}
	else if ((i == 0 || i == size - 1) && type == 1)
	{
		if (i == 0)
			return ('\\');
		else
			return ('/');
	}
	else if (i > 0 && i < size - 1)
		return ('*');
	else
		return ('\n');
}

char	print_line2_01(int size, int i)
{
	if (i == 0 || i == size - 1)
		return ('*');
	else if (i > 0 && i < size - 1)
		return (' ');
	else
		return ('\n');
}

int		conditions(char **str, int x, int y, int i[2])
{
	if (i[0] == 0)
	{
		if (print_line1_01(x, 0, i[1]) != str[i[0]][i[1]])
			return (0);
	}
	else if (i[0] == y - 1)
	{
		if (print_line1_01(x, 1, i[1]) != str[i[0]][i[1]])
			return (0);
	}
	else
	{
		if (print_line2_01(x, i[1]) != str[i[0]][i[1]])
			return (0);
	}
	return (1);
}

int		is_colle01(char **str, int x, int y)
{
	int i[2];

	i[0] = 0;
	i[1] = 0;
	while (i[0] < x)
	{
		while (i[1] < y)
		{
			if (!conditions(str, x, y, i))
				return (0);
			i[1]++;
		}
		i[1] = 0;
		i[0]++;
	}
	return (1);
}
