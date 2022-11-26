/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 23:03:26 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/26 23:03:29 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	size_t	count;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if ((char) *format != '%')
			ft_putchar(*format);
		if ((char) *format == '%')
			printf("HIIIIII\n");
		else
			printf("HOOOOOOO\n");
		format ++;
	}
	va_end(args);
	return (0);
}

int	main(void)
{
	ft_printf("%s");
}
