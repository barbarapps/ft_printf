/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_uxX.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balibala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 22:43:53 by balibala          #+#    #+#             */
/*   Updated: 2021/09/14 01:46:05 by balibala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*invert_nbr(char *nbr, int head, int tail)
{
	char	temp;

	while (head < tail)
	{
		temp = nbr[head];
		nbr[head] = nbr[tail];
		nbr[tail] = temp;
		head++;
		tail--;
	}
	return (nbr);
}
int		get_lenght(unsigned long long int number, int base)
{
	int length;

	if (number == 0)
		return (1);
	length = 0;
	while (number > 0)
	{	
		number /= base;
		length++;
	}
	return (length); 
}

char	*ft_itoa_base(unsigned long long int n, int base, t_flags *flags)
{
	int	b;
	int	lenght;
	char	*nbr;
	int r;

	lenght = 0;
	b = get_lenght(n, base);
	nbr = (char *)malloc(sizeof(char) * (b + 1));
	if (!nbr)
		return (NULL);
	r = 0;
	if (n == 0)
	{
		nbr[lenght++] = 48 + r;
		nbr[lenght] = '\0';
		return (nbr);
	}	
	while (n)
	{
		r =  n % base;
		if (r >= 10)
		{
			if (flags->type != 120 && flags->type != 112)
				nbr[lenght++] = 65 + (r - 10);
			else
				nbr[lenght++] = 97 + (r - 10);
		}
		else
			nbr[lenght++] = 48 + r;
		n /= base;
	}
	nbr[lenght] = '\0';
	return (invert_nbr(nbr, 0, lenght - 1)); 
}

char	*treat_base(t_flags *flags, va_list arg)
{
	if (flags->type == 'p')
		return (ft_itoa_base((unsigned long)va_arg(arg, unsigned long), 16, flags));
	if (flags->type == 'u')
		return (ft_itoa_base(va_arg(arg, unsigned int), 10, flags));
	else if (flags->type == 'x')
		return (ft_itoa_base(va_arg(arg, unsigned int), 16, flags));
	else if (flags->type == 'X')
		return (ft_itoa_base(va_arg(arg, unsigned int), 16, flags));
	return (NULL);
}

int	is_uxX(t_flags *flags, va_list arg)
{
	char			*str;
	int				count;
	unsigned int	width;
	int				i;	

	count = 0;
	str = treat_base(flags, arg);
	if (!str)
		return (0);
	i = 0;
	if (flags->type == 'p' || (flags->hash && str[i] != '0'))
		str = add_ptr(str);
	width = flags->min_width;
	if (!flags->minus && !flags->zero)
	{
		while (width-- > ft_strlen(str))
			count += ft_putchar(' ');
	}
	while (width-- > ft_strlen(str) && flags->zero && str[i] != '-')
		count += ft_putchar('0');
	count += ft_putstr(str);
	while (width-- > ft_strlen(str + 1) && flags->minus)
		count += ft_putchar(' ');
	free(str);
	return (count);
}
