/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 20:20:49 by eneto             #+#    #+#             */
/*   Updated: 2016/09/06 22:41:51 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);
char	*ft_strncat(char *dest, char *src, int nb);

void	ft_check_strcat()
{
	char str[] = "mopa";
	char to_append[] = " capirotica";

	printf("--------------Testing Ex16--------------\n");
	printf("String 1: %s\nString 2: %s\nResult  : %s\n", str, to_append, ft_strcat(str, to_append));
}

void	ft_check_strncat()
{
	char str[] = "mopa";
	char to_append[] = " capirotica";
  
	printf("--------------Testing Ex16--------------\n");
	printf("String 1: %s\nString 2: %s\nResult  : %s\n", str, to_append, ft_strncat(str, to_append, 5));
}
