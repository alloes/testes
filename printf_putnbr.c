/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:36:12 by alopes-n          #+#    #+#             */
/*   Updated: 2022/09/02 12:51:48 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_number(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

int	printf_putnbr(int nbr)
{
	int	i;

	i = count_number(nbr);
	if (nbr < 0)
	{
		printf_putchar('-');
		if (nbr <= -10)
			printf_putnbr(nbr / -10);
		printf_putchar(-(nbr % 10) + '0');
	}
	else if (nbr >= 10)
	{
		printf_putnbr(nbr / 10);
		printf_putchar((nbr % 10) + '0');
	}
	else
		printf_putchar(nbr + '0');
	return (i);
}
