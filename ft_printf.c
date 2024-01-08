/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:54:24 by asplavni          #+#    #+#             */
/*   Updated: 2024/01/08 19:36:14 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	ft_printfripoff(const char *format, ...)
{
	int	i = 0;
	int	num_args = ft_strlen(format);
	va_list args;

	va_start(args, format);
	while (i < num_args)
	{
		if (format[i] == "%")
			i++;
			if(format[i] == "%")
				ft_putchar_fd(v, 1);
			if(format[i] == "c")
				ft_putchar_fd(format[i], 1);
			if(format[i] == "s")
				ft_putstr_fd(format, 1);
			if(format[i] == "p")
			if(format[i] == "d" || format[i] == "i")
			if(format[i] == "u")
			if(format[i] == "x")
			if(format[i] == "X")
			if(format[i] == "X")
		i++;
	}
}

int	main(void)
{
	ft_printfripoff("%d %f %d", 4, 2, 4);
	return (0);
}
