/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-hadd <yel-hadd@mail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 23:07:10 by yel-hadd          #+#    #+#             */
/*   Updated: 2022/11/29 14:50:26 by yel-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putnbr_base_ptr(unsigned long nbr, char *base, int *count);
void	ft_putnbr_base(unsigned int nbr, char *base, int *count);
int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putunbr(unsigned int n, int *count);
void	ft_putnbr(int n, int *count);

#endif
