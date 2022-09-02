/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putpointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:44:49 by alopes-n          #+#    #+#             */
/*   Updated: 2022/09/02 13:04:28 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_putpointer(unsigned long int p)
{
	int	i;

	if (p == 0)
	{
		printf_putstr("(nil)");
		return (5);
	}
	printf_putstr("0x");
	i = printf_puthex(p, 'x');
	return (i + 2);
}
