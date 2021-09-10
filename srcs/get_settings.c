/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_settings.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balibala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 14:27:41 by balibala          #+#    #+#             */
/*   Updated: 2021/09/10 13:04:14 by bpinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	check_width(char *input, va_list args, t_flags *flags, int *i)
{
	int	out;
	int	counter;

	out = 0;
	counter = *i;
	while (input[counter] >= '0' && input[counter] <= '9')
	{
		out = out * 10 + (input[counter] - '0');
		counter++;
	}
	if (out != 0)
		flags->min_width = out;
	if (input[counter] == '*')
	{
		flags->min_width = va_arg(args, int);
		counter++;
	}
	*i = counter;
}

void	check_precision(char *input, va_list args, t_flags *flags)
{
	int	out;
	int	counter;

	out = 0;
	counter = 0;
	while (input[counter])
	{
		if (input[counter] == '*')
		{
			flags->precision = va_arg(args, int);
			counter++;
		}
		else
		{
			while (input[counter] >= '0' && input[counter] <= '9')
			{
				out = out * 10 + (input[counter] - '0');
				counter++;
			}
			flags->precision = out;
		}
	}
}

int	check_size(char *input, va_list args, t_flags *flags, int *counter)
{
	int	i;

	i = *counter;
	while (ft_isdigit(input[i]) || input[i] == '*')
	{
		if (flags->point)
			check_precision(input, args, flags);
		check_width(input, args, flags, &i);
	}
	*counter = i;
	return (0);
}

int	check_flags(char *input, t_flags *flags, int *counter)
{
	int	i;

	i = *counter;
	while (ft_strchr("-0. ", input[i]))
	{
		if (input[i] == '-')
			flags->minus += 1;
		else if (input[i] == '0' && !flags->minus && !ft_isdigit(input[i - 1]))
			flags->zero += 1;
		else if (input[i] == '.')
			flags->point += 1;
		else if (input[i] == ' ')
			flags->space += 1;
		i++;
	}
	*counter = i;
	return (i);
}

int	get_settings(char *input, va_list arg, t_flags *flags, int *i)
{
	int	counter;

	counter = *i;
	counter += 1;
	check_flags(input, flags, &counter);
	check_size(input, arg, flags, &counter);
	if (ft_strchr("cspdiuxX%", input[counter]))
		flags->type = input[counter];
	*i = counter;
	return (counter);
}
