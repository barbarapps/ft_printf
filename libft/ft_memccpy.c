/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpinto-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:52:20 by bpinto-d          #+#    #+#             */
/*   Updated: 2021/02/17 18:52:22 by bpinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*holddst;
	unsigned char	*holdsrc;

	i = 0;
	holddst = (unsigned char *)dst;
	holdsrc = (unsigned char *)src;
	while (i < n)
	{
		holddst[i] = holdsrc[i];
		if (holddst[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
