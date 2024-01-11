/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:54:24 by asplavni          #+#    #+#             */
/*   Updated: 2024/01/11 19:46:23 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		count += ft_putdigit((long)va_arg(args, int), 10);
	else if (format == 'x')
		count += ft_putdigit((long)(va_arg(args, unsigned int)), 16);
	else if (format == 'X')
		count += ft_putdigit2((long)(va_arg(args, unsigned int)), 16);
	// else if (format == 'u')
	// 	count += ft_putdigit((long)va_arg(args, int), 10);
		// count += ft_putunsigned_int((long)va_arg(args, unsigned int));
	// else if (format == 'p')
	// 	count += ft_pointer();
	else
		count += write(1, &format, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	int		num_args;
	va_list	args;

	i = 0;
	count = 0;
	num_args = ft_strlen(format);
	va_start(args, format);
	while (i < num_args)
	{
		if (format[i] == '%')
		{
			count += print_format(format[++i], args);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end (args);
	return (count);
}

# include <stdio.h>

int	main(void)
{
	int	value = 42;

	int	original_printf = printf("input: %d\noutput: %X\n", value, value);
	printf("count: %d\n", original_printf);
	printf("\n");
	int	ripoff_printf = ft_printf("input: %d\noutput: %X\n", value, value);
	printf("count: %d\n", ripoff_printf);

	return (0);
}
