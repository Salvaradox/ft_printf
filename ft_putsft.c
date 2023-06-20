/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:04:25 by salvalva          #+#    #+#             */
/*   Updated: 2023/06/20 17:39:34 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	if (str == NULL)
	{
		write(1,"(null)", 6);
		return (6);
	}
	while (str[i] = '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putptr(unsigned long ptr)
{
	int	i;

	i = 2;
	write(1, "0x", 2);
	i += ft_puthex(ptr, 0);
	return (i);
}

int	ft_puthex(unsigned long long num, int capital)
{
	int	i;

	i = 0;
	if (num >= 16)
	{
		i += ft_puthex(num / 16, capital);
	}
	if (capital == 0)
		ft_putchar("0123456789abcdef"[num % 16]);
	else
		ft_putchar("0123456789ABCDEF"[num % 16]);
	i++;
	return (i);
}
