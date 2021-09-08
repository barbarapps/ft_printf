/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_string.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balibala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 20:21:25 by balibala          #+#    #+#             */
/*   Updated: 2021/09/07 22:22:44 by balibala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	a_string(t_flags *flags, va_list arg)
{
	int count;
	char *s;
	int width;

	count = 0;
	s = va_arg(arg, char *);
	if (!s)
		s = "(null)";
	width = flags->min_width;
	while (width--)
		count += ft_putchar(' ');
	count += ft_putstr(s);
	return (count);
}
