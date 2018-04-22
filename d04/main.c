/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudemare <gudemare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 03:54:09 by gudemare          #+#    #+#             */
/*   Updated: 2016/09/04 15:12:27 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_check_iterative_factorial(int nb);
void	ft_check_recursive_factorial(int nb);
void	ft_check_iterative_power(int nb, int power);
void	ft_check_recursive_power(int nb, int power);
void	ft_check_fibonacci(int index);
void	ft_check_sqrt(int nb);
void	ft_check_is_prime(int nb);
void	ft_check_find_next_prime(int nb);

int		main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Please input 2 numbers.\n");
		return (-1);
	}
	ft_check_iterative_factorial(atoi(argv[1]));
	ft_check_recursive_factorial(atoi(argv[1]));
	ft_check_iterative_power(atoi(argv[1]), atoi(argv[2]));
	ft_check_recursive_power(atoi(argv[1]), atoi(argv[2]));
	ft_check_fibonacci(atoi(argv[1]));
	ft_check_sqrt(atoi(argv[1]));
	ft_check_is_prime(atoi(argv[1]));
	ft_check_find_next_prime(atoi(argv[1]));
 	return (0);
}
