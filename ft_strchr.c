/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:43:27 by asplavni          #+#    #+#             */
/*   Updated: 2024/01/10 19:02:22 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

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

/*#include <stdio.h>

int	main(void)
{
	//char	first[50] = "teste";
	char	*result = ft_strchr("teste", '\0');

	if (result != NULL)
	{
		printf("Resault: %s\n", result);
		printf("Memmory adress: %p", result);
	}
	else
		printf("Character 'c' not found in the string.\n");
	return (0);
} */