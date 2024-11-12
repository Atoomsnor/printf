/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:00:36 by roversch          #+#    #+#             */
/*   Updated: 2024/11/12 16:12:32 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_print_nbr(int n)
{
	int		i;
	char	c;

	i = 0;
	if (n < 0)
	{
		write (1, "-", 1);
		if (n == -2147483648)
		{
			write (1, "2147483648", 10);
			return (11);
		}
		n = -n;
	}
	if (n >= 10)
		i += ft_print_nbr(n / 10);
	c = (n % 10) + 48;
	write (1, &c, 1);
	return (++i);
}

int	ft_print_uns_deci(unsigned int n)
{
	int		i;
	char	c;

	i = 0;

	if (n >= 10)
		i += ft_print_uns_deci(n / 10);
	c = (n % 10) + 48;
	write (1, &c, 1);
	return (++i);
}