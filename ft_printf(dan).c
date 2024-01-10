#include "ft_printf.h"

static int	conversions(const char format, va_list args)
{
	char	c;
	int		len;

	len = 1;

	if (format == '%')
		write(1, "%%", 1);

	else if (format == 'c')
	{
		c = va_arg(args, int);
		write(1, &c, 1);
	}

	else if (format == 's')
		len = ft_putstr(va_arg(args, char *));

	else if (format == 'p')
		len = ft_print_ptr(va_arg(args, unsigned long long));

	else if (format == 'd' || format == 'i')
		len = ft_print_number(va_arg(args, int));

	else if (format == 'u')
		len = ft_print_unsigned_int(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len = ft_print_hex(format, va_arg(args, unsigned int));
	else
		write(1, &format, 1);
	return (len);
}