/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_int.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balibala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:39:47 by balibala          #+#    #+#             */
/*   Updated: 2021/09/14 02:24:01 by balibala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	a_int(t_flags *flags, va_list arg)
{
	int				count;
	char			*d;
	unsigned int	width;
	int				i;

	count = 0;
	d = ft_itoa(va_arg(arg, int));
	width = flags->min_width;
	i = 0;
	if (!flags->minus && !flags->zero && !flags->precision)
	{
		while (width-- > ft_strlen(d))
			count += ft_putchar(' ');
	}
	if (flags->plus && d[i] != '-')
		count += ft_putchar('+');
	if (flags->space && d[i] != '-')
		count += ft_putchar(' ');
	if (flags->zero)
	{
		while (width-- > ft_strlen(d))
		{
			if (d[i] == '-')
			{
				count += ft_putchar('-');
				i = 1;
			}
			count += ft_putchar('0');
		}
	}
	if (flags->precision)
	{
		while (flags->precision-- > (int)ft_strlen(d))
		{
			if (d[i] == '-')
			{
				count += ft_putchar('-');
				i = 1;
			}
			count += ft_putchar('0');
		}
	}
	count += ft_putstr(&d[i]);
	while (width-- > ft_strlen(d) && flags->minus)
		count += ft_putchar(' ');
	free(d);
	return (count);
}
