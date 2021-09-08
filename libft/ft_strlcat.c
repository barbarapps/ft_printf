/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpinto-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 16:35:06 by bpinto-d          #+#    #+#             */
/*   Updated: 2021/04/29 18:39:13 by bpinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	big(char *src)
{
	unsigned int	big;

	big = 0;
	while (src[big] != '\0')
	{
		big++;
	}
	return (big);
}

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	unsigned int	comb;
	unsigned int	dst_big;
	unsigned int	src_big;
	unsigned int	i;

	dst_big = big(dst);
	src_big = big(src);
	i = 0;
	if (dst_big >= dstsize)
		comb = src_big + dstsize;
	else
		comb = dst_big + src_big;
	if (dstsize == 0)
		return (comb);
	while ((dst_big < dstsize - 1) && src[i] != '\0')
	{
		dst[dst_big] = src[i];
		i++;
		dst_big++;
	}
	dst[dst_big] = '\0';
	return (comb);
}
