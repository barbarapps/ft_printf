/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_percentage.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balibala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 20:05:25 by balibala          #+#    #+#             */
/*   Updated: 2021/09/05 20:07:12 by balibala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	print_percentage(char *str, int precision)
{
	int index;

	index = 0;

	while (str[index] && index < precision)
		ft_putchar(str[index++]);
	return (index);
}

int	a_percentage(t_flags *flags)
{
	int char_count;
	char_count = 0;
	if (flags->minus == 0)
		char_count += print_percentage("%", 1);
	else
		char_count += 0;;
	return (char_count);
}
