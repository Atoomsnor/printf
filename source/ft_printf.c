/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:40:30 by roversch          #+#    #+#             */
/*   Updated: 2024/11/07 16:10:20 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_printf(const char *str, ...)
{
	size_t	i;

	i = 0;
	while (*str)
	{
		if (*str == '%')
			"do something cool";
		else 
			ft_putchar
		write (1, str, 1);
		str++;
		i++;
	}
	return (0);
}

int	main()
{
	ft_printf("hello");
	
	return (0);
}

char *str = "jatoch";
int	getal = 12;

printf("print de string: %s, print een getal:%d", str, getal)