/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roversch <roversch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:47:16 by roversch          #+#    #+#             */
/*   Updated: 2024/11/11 16:16:23 by roversch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "../libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_unsign_printnbr(unsigned int n);

#endif