/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 00:37:20 by eneto             #+#    #+#             */
/*   Updated: 2016/09/09 02:41:34 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static	int	isspace(char c)
{
	if (c == '\n' || c == ' ' || c == '\v' ||
		c == '\t' || c == '\r' || c == '\f' || c == '\n')
		return (1);
	return (0);
}

int			nb_letters(char *str)
{
	int counter;

	counter = 0;
	while (*str && !isspace(*str))
	{
		counter++;
		str++;
	}
	return (counter);
}

int			nb_words(char *str)
{
	int counter;
	int i;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] && isspace(str[i]))
			i++;
		if (str[i])
			counter++;
		while (str[i] && !isspace(str[i]))
			i++;
	}
	return (counter);
}

void		loop(int i, int j, char *str, char **words)
{
	while (*str)
	{
		while (*str && isspace(*str))
			str++;
		words[j] = malloc(sizeof(char) * nb_letters(str));
		while (*str && !isspace(*str))
		{
			words[j][i] = *str;
			i++;
			str++;
		}
		words[j][i] = '\0';
		j++;
		i = 0;
	}
	words[j] = NULL;
}

char		**ft_split_whitespaces(char *str)
{
	char	**words;
	int		i;
	int		j;

	while (*str && isspace(*str))
		str++;
	words = (char **)malloc(sizeof(char *) * (nb_words(str) + 1));
	i = 0;
	j = 0;
	loop(i, j, str, words);
	return (words);
}
