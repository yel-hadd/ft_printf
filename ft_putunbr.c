/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:48:14 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/29 14:48:47 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int n, int *count)
{
	char	zero;

	zero = '0';
	if (n <= 9)
	{
		zero += n;
		ft_putchar(zero, count);
	}
	else
	{
		ft_putnbr(n / 10, count);
		ft_putnbr(n % 10, count);
	}
}
