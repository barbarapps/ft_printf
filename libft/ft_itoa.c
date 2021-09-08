/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpinto-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 13:23:53 by bpinto-d          #+#    #+#             */
/*   Updated: 2021/04/29 18:37:30 by bpinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	know_len(int n)
{
	int		len;

	len = 0;
	if (n == 0)
		len++;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	positive_negative(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = know_len(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	while (n != '\0')
	{
		len--;
		str[len] = positive_negative(n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
