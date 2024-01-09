/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:54:24 by asplavni          #+#    #+#             */
/*   Updated: 2024/01/09 21:42:46 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_printfripoff(const char *format, ...)
{
	int	i = 0;
	int	num_args = ft_strlen(format);
	va_list	args;

	va_start(args, format);
	while (i < num_args)
	{
		if (format[i] == "%")
		{
			i++;

			if (format[i] == "%")
				write(1, "%%", 1);

			else if (format[i] == "c")
				ft_putchar_fd(va_arg(args, char), 1);

			else if (format[i] == "s")
				ft_putstr(va_arg(args, char *), 1);

			else if (format[i] == "p")
				ft_pointer();

			else if (format[i] == "d" || format[i] == "i")
				ft_print_number(va_args(args, int));

			else if (format[i] == "u")
				ft_print_unsigned_int();

			else if (format[i] == "x" || format[i] == "X")
				ft_print_hex();
			else
				write(1, &format, 1);
		}
	}
}

int	main(void)
{
	ft_printfripoff("%d %f %d", 4, 2, 4);
	return (0);
}
