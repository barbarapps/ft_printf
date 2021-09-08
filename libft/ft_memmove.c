/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpinto-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:51:55 by bpinto-d          #+#    #+#             */
/*   Updated: 2021/04/29 18:41:36 by bpinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*holddst;
	unsigned char	*holdsrc;

	holddst = (unsigned char *)dst;
	holdsrc = (unsigned char *)src;
	if (holddst > holdsrc)
	{
		while (len--)
			holddst[len] = holdsrc[len];
	}
	else if (holddst < holdsrc)
		ft_memcpy(dst, src, len);
	return (dst);
}
