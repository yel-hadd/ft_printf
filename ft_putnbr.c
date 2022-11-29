/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:50:02 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/29 14:44:20 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	char	var1;

	var1 = '0';
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", count);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-', count);
		n = -n;
	}
	if (n <= 9)
	{
		var1 += n;
		ft_putchar(var1, count);
	}
	else
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
}
