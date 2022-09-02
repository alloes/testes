/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putunsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:42:17 by alopes-n          #+#    #+#             */
/*   Updated: 2022/09/02 13:08:47 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_number(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	printf_putunsigned(unsigned int n)
{
	int	i;

	i = count_number(n);
	if (n >= 10)
	{
		printf_putunsigned(n / 10);
		printf_putchar((n % 10) + '0');
	}
	else
		printf_putchar(n + '0');
	return (i);
}
