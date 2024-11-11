/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:40:30 by roversch          #+#    #+#             */
/*   Updated: 2024/11/11 16:17:18 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_format(const char format, va_list args)
{
	int	printlen;

	if (format == 'c')
		printlen += ft_printchar(va_arg(args, int));
	else if (format == 's')
		printlen += ft_printstr(va_arg(args, char *));
	// else if (format == 'p')
	// 	ft_printvoid(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		printlen += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		printlen += ft_unsign_printnbr(va_arg(args, unsigned int));
	// else if (format == 'x')
	// 	ft_print_low_hexa(va_arg(args, unsigned int));
	// else if (format == 'X')
	// ft_print_up_hexa(va_arg(args, unsigned int));
	else if (format == '%')
		ft_printchar('%');
	return (printlen);
}

int	ft_printf(const char *str, ...)
{
	int	i;
	int	printlen;
	va_list	args;
	
	i = 0;
	printlen = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{	
			printlen += ft_format(str[i + 1], args);
			i++;
		}
		else 
			printlen += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (printlen);
}

int	main()
{
	int	len;

	len = ft_printf("123%d5%i7%u\n",4, 6, 8);
	printf("Chars prined: %d\n", len);
	return (0);
}
