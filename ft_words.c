/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:20:34 by asplavni          #+#    #+#             */
/*   Updated: 2024/01/12 16:17:15 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}

int	ft_putchar(char c)
{
	int	count;

	count = write(1, &c, sizeof(char));
	return (count);
}

int	ft_putstr(char *s)
{
	size_t	len;

	if (s == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = ft_strlen(s);
	write (1, s, len);
	return (len);
}
