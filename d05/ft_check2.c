/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 10:42:19 by eneto             #+#    #+#             */
/*   Updated: 2016/09/06 12:15:33 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);

void	ft_check_str_is_alpha()
{
	char str[] = "Mopasd daosP";
	char str2[] = "aoisjAODpq";
	char str3[] = "saPopsd1aoo";
	char str4[] = "";
	
	printf("--------------Testing Ex11--------------\n");
	printf("String: %s\t\t is alpha: %d\n", str, ft_str_is_alpha(str));
	printf("String: %s\t\t is alpha: %d\n", str2, ft_str_is_alpha(str2));
	printf("String: %s\t\t is alpha: %d\n", str3, ft_str_is_alpha(str3));
	printf("String: %s\t\t\t is alpha: %d\n", str4, ft_str_is_alpha(str4));
}

void	ft_check_str_is_numeric()
{
	char str[] = "140981053";
	char str2[] = "12450A9230";
	char str3[] = "12493249 1235";
	char str4[] = "";
	
	printf("--------------Testing Ex12--------------\n");
	printf("String: %s\t\t is numeric: %d\n", str, ft_str_is_numeric(str));
	printf("String: %s\t\t is numeric: %d\n", str2, ft_str_is_numeric(str2));
	printf("String: %s\t\t is numeric: %d\n", str3, ft_str_is_numeric(str3));
	printf("String: %s\t\t\t is numeric: %d\n", str4, ft_str_is_numeric(str4));
}

void	ft_check_str_is_lowercase()
{
	char str[] = "aoag asdajs";
	char str2[] = "oijoaijpjoqe";
	char str3[] = "asdpoaksdpAsda";
	char str4[] = "";
	
	printf("--------------Testing Ex13--------------\n");
	printf("String: %s\t\t is lower case: %d\n", str, ft_str_is_lowercase(str));
	printf("String: %s\t\t is lower case: %d\n", str2, ft_str_is_lowercase(str2));
	printf("String: %s\t\t is lower case: %d\n", str3, ft_str_is_lowercase(str3));
	printf("String: %s\t\t\t is lower case: %d\n", str4, ft_str_is_lowercase(str4));
}

void	ft_check_str_is_uppercase()
{
	char str[] = "ADASJ ADOIASJ";
	char str2[] = "OAISJDOASKJOSAD";
	char str3[] = "OAISJDOIASsdIOA";
	char str4[] = "";
	
	printf("--------------Testing Ex14--------------\n");
	printf("String: %s\t\t is upper case: %d\n", str, ft_str_is_uppercase(str));
	printf("String: %s\t\t is upper case: %d\n", str2, ft_str_is_uppercase(str2));
	printf("String: %s\t\t is upper case: %d\n", str3, ft_str_is_uppercase(str3));
	printf("String: %s\t\t\t is upper case: %d\n", str4, ft_str_is_uppercase(str4));
}

void	ft_check_str_is_printable()
{
	char str[] = "Aoijsadoia asd";
	char str2[] = "asIASj \x03";
	char str3[] = "OA/ ssad \x00 - =+ -1O";
	char str4[] = "";
	
	printf("--------------Testing Ex15--------------\n");
	printf("String: %s\t\t is printable: %d\n", str, ft_str_is_printable(str));
	printf("String: %s\t\t is printable: %d\n", str2, ft_str_is_printable(str2));
	printf("String: %s\t\t is printable: %d\n", str3, ft_str_is_printable(str3));
	printf("String: %s\t\t\t is printable: %d\n", str4, ft_str_is_printable(str4));
}
