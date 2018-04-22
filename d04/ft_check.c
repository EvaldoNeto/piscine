/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gudemare <gudemare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 03:54:06 by gudemare          #+#    #+#             */
/*   Updated: 2016/09/04 15:12:06 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <time.h>

int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int		ft_iterative_power(int nb, int power);
int		ft_recursive_power(int nb, int power);
int		ft_fibonacci(int index);
int		ft_sqrt(int nb);
int		ft_is_prime(int nb);
int		ft_find_next_prime(int nb);

void	ft_check_iterative_factorial(int nb)
{
	int		test_res;
	clock_t	begin;
	clock_t	end;
	double	time;

	begin = clock();
	test_res = ft_iterative_factorial(nb);
	end = clock();
	time = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Ex00 : ft_iterative_factorial(%d) -> %d in %f seconds\n",
			nb, test_res, time);
}

void	ft_check_recursive_factorial(int nb)
{
	int		test_res;
	clock_t	begin;
	clock_t	end;
	double	time;

	if (nb > 250000)
	{
		printf("Ex01 : ft_recursive_factorial(%d) : === Not testing ===\n", nb);
		return ;
	}
	begin = clock();
	test_res = ft_recursive_factorial(nb);
	end = clock();
	time = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Ex01 : ft_recursive_factorial(%d) -> %d in %f seconds.\n",
			nb, test_res, time);
}

void	ft_check_iterative_power(int nb, int power)
{
	int		test_res;
	clock_t	begin;
	clock_t	end;
	double	time;

	begin = clock();
	test_res = ft_iterative_power(nb, power);
	end = clock();
	time = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Ex02 : ft_iterative_power(%d, %d) -> %d in %f seconds.\n",
			nb, power, test_res, time);
}

void	ft_check_recursive_power(int nb, int power)
{
	int		test_res;
	clock_t	begin;
	clock_t	end;
	double	time;

	if (nb > 250000)
	{
		printf("Ex03 : ft_recursive_power(%d) : === Not testing ===\n", nb);
		return ;
	}
	begin = clock();
	test_res = ft_recursive_power(nb, power);
	end = clock();
	time = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Ex03 : ft_recursive_power(%d, %d) -> %d in %f seconds.\n",
			nb, power, test_res, time);
}

void	ft_check_fibonacci(int index)
{
	int		test_res;
	clock_t	begin;
	clock_t	end;
	double	time;

	if (index >= 48)
	{
		printf("Ex04 : ft_fibonacci(%d) : === Not testing ===\n", index);
		return ;
	}
	begin = clock();
	test_res = ft_fibonacci(index);
	end = clock();
	time = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Ex04 : ft_fibonacci(%d) -> %d in %f seconds.\n",
			index, test_res, time);
}

void	ft_check_sqrt(int nb)
{
	int		test_res;
	clock_t	begin;
	clock_t	end;
	double	time;

	begin = clock();
	test_res = ft_sqrt(nb);
	end = clock();
	time = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Ex05 : ft_sqrt(%d) -> %d in %f seconds.\n", nb, test_res, time);
}

void	ft_check_is_prime(int nb)
{
	int		test_res;
	clock_t	begin;
	clock_t	end;
	double	time;

	begin = clock();
	test_res = ft_is_prime(nb);
	end = clock();
	time = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Ex06 : ft_is_prime(%d) -> %d in %f seconds.\n", nb, test_res, time);
}

void	ft_check_find_next_prime(int nb)
{
	int		test_res;
	clock_t	begin;
	clock_t	end;
	double	time;

	begin = clock();
	test_res = ft_find_next_prime(nb);
	end = clock();
	time = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Ex07 : ft_find_next_prime(%d) -> %d in %f seconds.\n",
			nb, test_res, time);
}
