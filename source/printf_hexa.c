/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_hexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:32:21 by roversch          #+#    #+#             */
/*   Updated: 2024/11/12 16:04:31 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_hex(unsigned int n, const char format)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_print_hex(n / 16, format);
		i += ft_print_hex(n % 16, format);
	}
	else
	{
		if (n <= 9)
		{	
			i += ft_print_char(n + '0');
		}
		else
		{
			if (format == 'x')
				i += ft_print_char(n - 10 + 'a');
			if (format == 'X')
				i += ft_print_char(n - 10 + 'A');
		}
	}
	return (i);
}