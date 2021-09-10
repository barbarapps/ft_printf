/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_string.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balibala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 20:21:25 by balibala          #+#    #+#             */
/*   Updated: 2021/09/10 18:01:04 by bpinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	a_string(t_flags *flags, va_list arg)
{
	int		count;
	char	*s;
	int		width;

	count = 0;
	s = va_arg(arg, char *);
	if (!s)
		s = "(null)";
	width = flags->min_width;
	while (width)
	{
		if (flags->minus)
		{
			count += ft_putstr(s);
			while (width-- > 1)
				count += ft_putchar(' ');;
		}
		else 
			count += ft_putstr(s);
	}
	return (count);
}
