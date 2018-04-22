/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_colle03.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 21:40:14 by cbouvell          #+#    #+#             */
/*   Updated: 2016/09/18 00:02:43 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	print_line1_03(int size, int i)
{
	if (i == 0)
		return ('A');
	if (i == size - 1)
		return ('C');
	else if (i > 0 && i < size - 1)
		return ('B');
	else
		return ('\n');
}

char	print_line2_03(int size, int i)
{
	if (i == 0 || i == size - 1)
		return ('B');
	else if (i > 0 && i < size - 1)
		return (' ');
	else
		return ('\n');
}

int		is_colle03(char **str, int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i][j])
		{
			if (i == 0 || i == y - 1)
			{
				if (print_line1_03(x, j) != str[i][j])
					return (0);
			}
			else
			{
				if (print_line2_03(x, j) != str[i][j])
					return (0);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
