/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_colle.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 20:58:13 by eneto             #+#    #+#             */
/*   Updated: 2016/09/18 02:02:25 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_COLLE_H
# define LIB_COLLE_H

int		ft_strlen(char *str);
int		ft_tab_size(char **str);
void	read_to_string(char **str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	col_print(char *str, int nb1, int nb2, int *flag);

char	print_line1(int size, int i);
char	print_line2(int size, int i);
int		is_colle00(char **str, int x, int y);

char	print_line1_01(int size, int type, int i);
char	print_line2_01(int size, int i);
int		is_colle01(char **str, int x, int y);

char	print_line1_02(int size, int type, int i);
char	print_line2_02(int size, int i);
int		is_colle02(char **str, int x, int y);

char	print_line1_03(int size, int i);
char	print_line2_03(int size, int i);
int		is_colle03(char **str, int x, int y);

char	print_line1_04(int size, int type, int i);
char	print_line2_04(int size, int i);
int		is_colle04(char **str, int x, int y);

#endif
