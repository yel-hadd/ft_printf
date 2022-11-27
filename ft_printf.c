/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 23:03:26 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/27 01:14:45 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_handler(va_list ap, char c)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, int));
	else if (c == 's')
		ft_putstr(va_arg(ap, char *));
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if ((char) format[i] == '%')
		{
			i ++;
			i += ft_handler(args, format[i]);
		}
		else
			i += ft_putchar(format[i]);
	}
	//printf("%zu", i);
	va_end(args);
	return (0);
}

int	main(void)
{
	ft_printf("%s", "Hello World");
}
