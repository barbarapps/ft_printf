/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpinto-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 11:49:27 by bpinto-d          #+#    #+#             */
/*   Updated: 2021/04/29 18:44:31 by bpinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*b;

	b = 0;
	while (*s)
	{
		if (*(char *)s == (char)c)
			b = (char *)s;
		s++;
	}
	if (b != 0)
		return (b);
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
