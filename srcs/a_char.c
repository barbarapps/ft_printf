/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_char.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balibala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:57:13 by balibala          #+#    #+#             */
/*   Updated: 2021/09/05 16:57:07 by balibala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	a_char(t_flags *flags, va_list arg)
{
	unsigned char c;
	int		width;
	int		count;
	int		space;

	c = va_arg(arg, int);
	count = 0;
	width = flags->min_width;
	space = flags->space;
	while (width-- > 1 && !flags->minus)
		count += ft_putchar(' ');
	count += ft_putchar(c);
	while (width-- > 0 && flags->minus)
		count += ft_putchar(' ');
	if (space == 2)
		count += ft_putchar(' ');
	return (count);
}
