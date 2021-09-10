/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_int.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balibala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:39:47 by balibala          #+#    #+#             */
/*   Updated: 2021/09/10 01:07:25 by balibala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	a_int(t_flags *flags, va_list arg)
{
	int count;
	char *d;
	unsigned int	width;
	int	i;

	count = 0;
	d = ft_itoa(va_arg(arg, int));
	width = flags->min_width;
	i = 0;

	/*if (flags->space && d[i] != '-')
	{
		count += ft_putchar(' ');
		width -= 1;
	}*/

	//while (width-- > ft_strlen(d) && !flags->zero && !flags->space && !flags->minus)
		//count += ft_putchar(' ');
	if (flags->space && d[i] != '-')
	{
		count += ft_putchar(' ');
		width -= 1;
	}
	while (width-- > ft_strlen(d) && flags->minus && flags->space)
		count += ft_putchar(' ');
	while (width-- > ft_strlen(d + 1) && flags->minus && !flags->zero)
			count +=  ft_putchar(' ');
	if (flags->zero && width > 0)
	{
		while (width--)
			count += ft_putchar('0');
		count += ft_putstr(d);
	}
	//if (flags->plus)
		//count += ft_putchar('+');
		//count += width(flags, (int)ft_strlen(d) - 1);
	else
		count += ft_putstr(d);
	free(d);
	return (count);
}
