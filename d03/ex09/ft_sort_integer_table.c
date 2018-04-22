/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/02 04:27:56 by eneto             #+#    #+#             */
/*   Updated: 2016/09/02 05:56:23 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int temp;
	int counter1;
	int counter2;
	
	counter1 = 0;
	counter2 = 1;
	while (counter1 < size)
	{
		while (counter2 < size)
		{
			if(*(tab+counter1) > *(tab + counter2))
			{
				temp = *(tab + counter1);
				*(tab + counter1) = *(tab + counter2);
				*(tab + counter2) = temp;
			}
			counter2++;
		}
		counter1++;
		counter2 = counter1 + 1;
	}
}
