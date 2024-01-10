/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 14:10:58 by asplavni          #+#    #+#             */
/*   Updated: 2024/01/10 19:05:20 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr_fd(long n, int base);
{
	if (n == 0)
		ft_putchar_fd(n + '0');
	else if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 10 && n > 0)
		ft_putchar_fd(n + '0');
	else if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-');
		ft_putnbr_fd(n);
	}
	else
	{
		ft_putnbr_fd(n / 10);
		ft_putnbr_fd(n % 10);
	}
}
