/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:40:31 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/29 14:43:36 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

void	ft_putnbr_base(unsigned int nbr, char *base, int *count)
{
	if (nbr < 16)
		ft_putchar(base[nbr], count);
	else
	{
		ft_putnbr_base(nbr / 16, base, count);
		ft_putnbr_base(nbr % 16, base, count);
	}
}
