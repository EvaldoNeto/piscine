/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 17:13:00 by eneto             #+#    #+#             */
/*   Updated: 2016/09/08 23:59:52 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);
int		ft_strlen(char *str);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_concat_params(int argc, char **argv);
char	**ft_split_whitespaces(char *str);
int		nb_words(char *str);

void	ft_check_strdup()
{
	char	source_str[] = "This time I have to pass ex01";
	char	*dest_str = ft_strdup(source_str);
	int		length;

	length = ft_strlen(source_str);
	printf("-------------------------Ex00-------------------------\n");
	printf("Copied string: %s\n", dest_str);
	if (*(dest_str + length) == '\0')
		printf("Copied sring terminate with \\0\n");
	else
		printf("Failed\n");
}

void	ft_check_range()
{
	int		min = -2147483648;
	int		max = 2147483647;
	int		*ptr = ft_range(min, max);
	int		i;

	i = min;
	printf("-------------------------Ex01-------------------------\n");
	while (i < min + 10)
	{
		printf("Number: %d\n", *(ptr + i - min));
		i++;
	}
}

void	ft_check_ultimate_range()
{
	int		min;
	int		max ;
	int		**ptr = (int **)malloc(1);
	int		size;
	int		i;

	i = 0;
	min = -10;
	max = 20;
	printf("-------------------------Ex02-------------------------\n");
	size = ft_ultimate_range(ptr, min, max);
	printf("Size of the vector: %d\nNot Null: %d\n", size, **ptr/min);
	while (i < 20)
	{
		printf("%d\n", *(*ptr + i));
		i++;
	}
}

void	ft_check_concat_params(int argc, char **argv)
{
	printf("-------------------------Ex03-------------------------\n");
	printf("%s", ft_concat_params(argc, argv)); 
}

void	ft_check_split_whitespaces()
{
	char str[] = "    asad sda sda          as d d ";
	int i;
	int size;
	char **tab;
	
	i = 0;
	size = nb_words(str);
	printf("\n-------------------------Ex04-------------------------\n");
	tab = ft_split_whitespaces(str);
	printf("Original string: %s\n", str);
	while (i <= size)
	{
		printf("%s\n", *(tab + i));
		i++;
	}
	printf("number of words: %d\n", nb_words(str));
}
