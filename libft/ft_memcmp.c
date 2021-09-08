/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpinto-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:54:11 by bpinto-d          #+#    #+#             */
/*   Updated: 2021/04/29 18:40:13 by bpinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*holds1;
	unsigned char	*holds2;

	holds1 = (unsigned char *)s1;
	holds2 = (unsigned char *)s2;
	if (holds1 == holds2 || n == 0)
		return (0);
	while (n--)
	{
		if (*holds1 != *holds2)
			return (*holds1 - *holds2);
		if (n)
		{
			holds1++;
			holds2++;
		}
	}
	return (0);
}
