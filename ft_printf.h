/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:00:23 by salvalva          #+#    #+#             */
/*   Updated: 2023/07/06 18:41:34 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <strings.h>
# include <limits.h>
# include <stdlib.h>

int			ft_printf(char const *str, ...);
int			ft_putchar(int c);
int			ft_putstr(char *str);
int			ft_putptr(unsigned long ptr);
int			ft_puthex(unsigned long long num, int capital);
char		*ft_itoa(int n);
int			ft_putnbr(int nb);
char		*ft_itoa_unsigned(unsigned int n);
int			ft_putnbr_unsigned(unsigned int nb);
int			ft_checktype(va_list args, const char str, int cont2);

#endif