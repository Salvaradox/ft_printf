/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdecimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salvalva <salvalva@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:27:40 by salvalva          #+#    #+#             */
/*   Updated: 2023/07/06 18:42:01 by salvalva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_count(long x)
{
	size_t	c;

	c = 0;
	if (x <= 0)
		c++;
	while (x != 0)
	{
		x /= 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	n1;

	n1 = n;
	len = num_count(n1);
	str = (char *) malloc (sizeof (char) * (len + 1));
	if (!str)
		return (0);
		str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n1 < 0)
	{
		str[0] = '-';
		n1 = n1 * -1;
	}
	while (n1 > 0)
	{
		str[len] = (n1 % 10) + '0';
		n1 = n1 / 10;
		len--;
	}
	return (str);
}

int	ft_putnbr(int nb)
{
	char	*str;
	int		num;

	str = ft_itoa(nb);
	num = ft_putstr(str);
	free (str);
	return (num);
}

char	*ft_itoa_unsigned(unsigned int n)
{
	char	*str;
	size_t	len;
	long	n1;

	n1 = n;
	len = num_count(n1);
	str = (char *) malloc (sizeof (char) * (len + 1));
	if (!str)
		return (0);
		str[len--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n1 < 0)
	{
		str[0] = '-';
		n1 = n1 * -1;
	}
	while (n1 > 0)
	{
		str[len] = (n1 % 10) + '0';
		n1 = n1 / 10;
		len--;
	}
	return (str);
}

int	ft_putnbr_unsigned(unsigned int nb)
{
	char	*str;
	int		num;

	str = ft_itoa_unsigned(nb);
	num = ft_putstr(str);
	free (str);
	return (num);
}
