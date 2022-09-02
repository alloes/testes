/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 07:16:40 by alopes-n          #+#    #+#             */
/*   Updated: 2022/09/02 12:48:53 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	flag_conversion(const char *format, va_list args)
{
	if (*format == 'c')
		return (printf_putchar(va_arg(args, int)));
	else if (*format == 's')
		return (printf_putstr(va_arg(args, char *)));
	else if (*format == 'd' || *format == 'i')
		return (printf_putnbr(va_arg(args, int)));
	else if (*format == 'u')
		return (printf_putunsigned(va_arg(args, unsigned int)));
	else if (*format == 'x')
		return (printf_puthex(va_arg(args, unsigned int), 'x'));
	else if (*format == 'X')
		return (printf_puthex(va_arg(args, unsigned int), 'X'));
	else if (*format == 'p')
		return (printf_putpointer(va_arg(args, unsigned long int)));
	else if (*format == '%')
		return (printf_putchar('%'));
	return (1);
}

int	ft_printf(const char *str, ...)
{
	va_list			args;
	unsigned int	count;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += flag_conversion(str, args);
		}
		else
			count += printf_putchar(*str);
		str++;
	}
	va_end(args);
	return (count);
}
