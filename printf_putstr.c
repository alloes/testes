/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 09:20:39 by alopes-n          #+#    #+#             */
/*   Updated: 2022/09/02 13:06:08 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_putstr(char *str)
{
	int	i;

	if (str == NULL)
	{
		printf_putstr("(null)");
		return (6);
	}
	i = 0;
	while (str[i])
	{
		printf_putchar(str[i]);
		i++;
	}
	return (i);
}
