/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 07:22:29 by alopes-n          #+#    #+#             */
/*   Updated: 2022/09/02 13:03:27 by alopes-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	printf_putchar(char c);
int	printf_putstr(char *str);
int	printf_puthex(unsigned long int n, char type);
int	printf_putpointer(unsigned long int p);
int	printf_putnbr(int nbr);
int	printf_putunsigned(unsigned int n);

#endif