/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:59:33 by asplavni          #+#    #+#             */
/*   Updated: 2024/01/12 17:57:28 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);

int		ft_putchar(char c);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *s);

int		ft_putdigit(long n, int base);
int		ft_hexa(long n, int base, char UP_or_low);
int		ft_pointer(long n, int base);


#endif