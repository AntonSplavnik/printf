/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:54:24 by asplavni          #+#    #+#             */
/*   Updated: 2024/01/10 19:33:06 by asplavni         ###   ########.fr       */
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
	else if (format == 'p')
		count += ft_pointer();
	else if (format == 'd' || format == 'i')
		count += ft_putnbr((long)va_arg(args, int)), 10);
	else if (format == 'x' || format == 'X')
		count += ft_print_hex((long)(va_arg(args, int)), 10);
	else if (format == 'u')
		count += ft_print_unsigned_int(va_arg(args, unsigned int));
	else
		count += write(1, &format, 1);
	return (count);
}

int	ft_printfripoff(const char *format, ...)
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
			count += print_format(format[i++], args);
		else
			count += write(1, format, 1);
		i++;
	}
	va_end (args);
	return (count);
}


// int	main(void)
// {
// 	int	original_printf = printf("O%i %d %i", 4, 2, 4);
// 	printf("Original value:%d\n", original_printf);

// 	int	ripoff_printf = ft_printfripoff("%d %f %d", 4, 2, 4);
// 	printf("Ripoff value: %d\n", ripoff_printf);

// 	return (0);
// }
