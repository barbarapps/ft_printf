/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_int.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balibala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:39:47 by balibala          #+#    #+#             */
/*   Updated: 2021/09/10 10:17:25 by bpinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	a_int(t_flags *flags, va_list arg)
{
	int				count;
	char			*d;
	unsigned int	width;

	count = 0;
	d = ft_itoa(va_arg(arg, int));
	width = flags->min_width;
	while (width-- > ft_strlen(d) && !flags->minus && !flags->zero)
		count += ft_putchar(' ');
	count += ft_putstr(d);
	while (width-- > ft_strlen(d + 1) && flags->minus)
		count += ft_putchar(' ');
	free(d);
	return (count);
}
