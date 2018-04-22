/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 09:56:01 by eneto             #+#    #+#             */
/*   Updated: 2016/09/06 23:38:42 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Based on gudemare file                                                     */

#include <string.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
  
int		ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);

void	ft_check_putstr()
{
	char str[] = "Testing pustr";

	printf("--------------Testing Ex00--------------\n");
	ft_putstr("Ex00: ft_putstr(");
	ft_putstr(str);
	ft_putstr(") = ");
	ft_putstr(str);
}

void	ft_check_putnbr()
{
	int i;

	i = -11;
	printf("--------------Testing Ex01--------------\n");
	while (i < 21)
	{
		ft_putstr("ft_ptnbr(");
		ft_putnbr(i);
		ft_putstr(") = ");
		ft_putnbr(i);
		printf("\n");
		i++;
	}
}

void	ft_check_atoi()
{  
	printf("--------------Testing Ex02--------------\n");
	printf("atoi: %d         ft_atoi: %d\n", atoi("1635517450"), ft_atoi("1635517450"));
	printf("atoi: %d         ft_atoi: %d\n", atoi(" 1230.213 "), ft_atoi(" 1230.213 "));
	printf("atoi: %d         ft_atoi: %d\n", atoi(" +0123 "), ft_atoi(" +0123 "));
	printf("atoi: %d         ft_atoi: %d\n", atoi(" + 123 "), ft_atoi(" + 123 "));
	printf("atoi: %d         ft_atoi: %d\n", atoi(" A123 "), ft_atoi(" A123 "));
	printf("atoi: %d         ft_atoi: %d\n", atoi("  --123 "), ft_atoi("  --123 "));
	printf("atoi: %d         ft_atoi: %d\n", atoi(" -123 "), ft_atoi(" -123 "));
}

void	ft_check_strcpy()
{
	char str[] = "micapokpo";
	char copied_str[] = "asdasf";

	printf("--------------Testing Ex03--------------\n");
	ft_strcpy(copied_str, str);
	printf("Copied string: ");
	printf("%s\n", copied_str);
}

void	ft_check_strncpy()
{
	char str[] = "Capricornio 42";
	char *copied_str = malloc(256);
	
	printf("--------------Testing Ex04--------------\n");
	printf("\n String to copy: %s\n", str);
	printf("Copied string: %s", ft_strncpy(copied_str, str, 30));
}

void	ft_check_strstr()
{
	char	str[] = "Capricornio";
	char	to_find[] = "Capricornio Ornitorrinco";

	printf("--------------Testing Ex05--------------\n");
	printf("\nOriginal string: %s\n", str);
	printf("String to find: %s\n", to_find);
	printf("Result string: %s\n", ft_strstr(str, to_find));
	printf("Resul strstr : %s\n", strstr(str, to_find));
}

void	ft_check_strcmp()
{
	char str[] = "ABC";
	char str1[] = "ABC";

	printf("--------------Testing Ex06--------------\n");
	printf("\nFirst string: Cactus\n");
	printf("Second string: Homops\n");
	printf("Result original: %d\n : ", strcmp(str, str1));
	//printf("Changing order of strings\nReturn value: %d\n", ft_strncmp("Homops", str, 3));
	printf("Two equal strings: Cactus\nReturn value: %d\n", ft_strcmp(str, str1));
}

void	ft_check_strncmp()
{	
	char str[] = "ABCD";
	char str1[] = "ABCD";

	printf("--------------Testing Ex07--------------\n");
	printf("\nFirst string: Cactus\n");
	printf("Second string: Homops\n");
	printf("Result original: %d\n : ", strncmp(str, str1, 8));
	//printf("Changing order of strings\nReturn value: %d\n", ft_strncmp("Homops", str, 3));
	printf("Two equal strings: Cactus\nReturn value: %d\n", ft_strncmp(str, str1, 8));
}

void	ft_check_strupcase()
{
	char str[] = "mopa-AbvD cuT230";

	printf("--------------Testing Ex08--------------\n");
	printf("\nString to test: %s\n", str);
	printf("Return value: %s\n", ft_strupcase(str));
}

void	ft_check_strlowcase()
{
	char str[] = "mopa-AbvD cuT230";

	printf("--------------Testing Ex09--------------\n");
	printf("\nString to test: %s\n", str);
	printf("Return value: %s\n", ft_strlowcase(str));
}

void	ft_check_strcapitalize()
{
//	char str[] = "salut, comment tu vas? 42mots quarante-deux; cinquanten+et+un";
	char str1[] = "znbAzM rrABCph akb42ASw1Pch-hz?yhv";
	printf("--------------Testing Ex10--------------\n");
	printf("\nString to test: %s\n", str1);
	printf("Return value: %s\n", ft_strcapitalize(str1));
}
