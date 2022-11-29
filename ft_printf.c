/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 23:03:26 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/29 14:41:58 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_handler(va_list ap, char c, int *count)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, int), count);
	else if (c == 'u')
		ft_putunbr(va_arg(ap, unsigned int), count);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), count);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ap, int), count);
	else if (c == 'x')
		ft_putnbr_base(va_arg(ap, unsigned int), "0123456789abcdef", count);
	else if (c == 'X')
		ft_putnbr_base(va_arg(ap, unsigned int), "0123456789ABCDEF", count);
	else if (c == 'p')
	{
		ft_putstr("0x", count);
		ft_putnbr_base_ptr(va_arg(ap, unsigned long),
			"0123456789abcdef", count);
	}
	else
		ft_putchar(c, count);
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		d;

	d = 0;
	va_start(args, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i] == '%' && !format[i + 1])
				break ;
			i ++;
			ft_handler(args, format[i], &d);
		}
		else
			ft_putchar(format[i], &d);
		i ++;
	}
	va_end(args);
	return (d);
}
