/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_puthex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:53:32 by alopes-n          #+#    #+#             */
/*   Updated: 2022/09/02 13:03:05 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_number(unsigned long int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	printf_puthex(unsigned long int n, char type)
{
	int	i;

	i = count_number(n);
	if (n >= 16)
	{
		printf_puthex(n / 16, type);
		printf_puthex(n % 16, type);
	}
	else
	{
		if (n <= 9)
		{
			printf_putchar(n + '0');
		}
		else
		{
			if (type == 'x')
				printf_putchar(n + 87);
			else if (type == 'X')
				printf_putchar(n += 55);
		}
	}
	return (i);
}
