/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:02:25 by salvalva          #+#    #+#             */
/*   Updated: 2023/06/21 17:23:09 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

int	ft_checktype(va_list args, const char str, int cont2)
{
	if (str == 'c')
		cont2 += ft_putchar(va_arg(args, int));
	else if (str == 's')
		cont2 += ft_putstr(va_arg(args, char *));
	else if (str == 'p')
		cont2 += ft_putptr(va_arg(args, unsigned long));
	else if (str == 'd' || str == 'i')
		cont2 += ft_putnbr(va_arg(args, int));
	else if (str == 'u')
		cont2 += ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (str == 'x')
		cont2 += ft_puthex(va_arg(args, unsigned int), 0);
	else if (str == 'X')
		cont2 += ft_puthex(va_arg(args, unsigned int), 1);
	else if (str == '%')
		cont2 += ft_putchar('%');
	return (cont2);	
}

int	ft_printf(char const *str, ...)
{
	int		cont1;
	int		cont2;
	int		i;
	va_list	args;

	va_start(args, str);
	cont1 = 0;
	cont2 = 0;
	i = 0;
    
	while(str[i])
    {
		if (str[i] == '%')
		{
			cont1 += ft_checktype(args, str[i + 1], cont2);
			i++;
		}
		else
			cont1 += ft_putchar(str[i]);
		i++;
    }
	va_end(args);
	return(cont1);
}
