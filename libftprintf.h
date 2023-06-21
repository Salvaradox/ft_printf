/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:00:23 by salvalva          #+#    #+#             */
/*   Updated: 2023/06/21 17:14:20 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int			ft_printf(char const *str, ...);
int			ft_putchar(int c);
int			ft_putstr(char *str);
int			ft_putptr(unsigned long ptr);
int			ft_puthex(unsigned long long num, int capital);
static int	num_count(long x);
char		*ft_itoa(int n);
int			ft_putnbr(int nb);
char		*ft_itoa_unsigned(unsigned int n);
int			ft_putnbr_unsigned(unsigned int nb);
int			ft_checktype(va_list args, const char str, int cont2);

#endif