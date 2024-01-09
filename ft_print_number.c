/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:08:08 by asplavni          #+#    #+#             */
/*   Updated: 2024/01/09 18:12:59 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	ft_print_number(int n)
{
	int		temp;
	char	*new;

	new = ft_itoa(n);
	ft_putnbr_fd(n, 1);
	temp = ft_strlen(n);
	free(new);
	return (temp);
}
