/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:14:34 by asplavni          #+#    #+#             */
/*   Updated: 2024/01/13 11:10:57 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdigit(long long n, int base)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_putdigit(-n, base) + 1);
	}
	else if (n < base)
		return (ft_putchar(symbols[n]));
	else
	{
		count = ft_putdigit(n / base, base);
		return (count + ft_putdigit(n % base, base));
	}
}

int	ft_hexa(long n, int base, char UP_or_low)
{
	int		count;
	char	*symbols;

	if (UP_or_low == 'x')
		symbols = "0123456789abcdef";
	else
		symbols = "0123456789ABCDEF";
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_hexa(-n, base, UP_or_low) + 1);
	}
	else if (n < base)
		return (ft_putchar(symbols[n]));
	else
	{
		count = ft_hexa(n / base, base, UP_or_low);
		return (count + ft_hexa(n % base, base, UP_or_low));
	}
}

int	ft_pointer(unsigned long n, int base)
{
	int		count;
	char	*symbols;

	symbols = "0123456789abcdef";
	count = 0;
	if (n == 0)
		return (write (1, "(nil)", 5));
	count += write(1, "0x", 2);
	if (n < (unsigned long)base)
		return (count + ft_putchar(symbols[n]));
	else
	{
		count += ft_putdigit(n / base, base);
		return (count + ft_putdigit(n % base, base));
	}
}
