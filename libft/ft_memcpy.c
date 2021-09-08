/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpinto-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 18:20:32 by bpinto-d          #+#    #+#             */
/*   Updated: 2021/02/19 18:14:56 by bpinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*holddst;
	unsigned char	*holdsrc;

	holddst = (unsigned char *)dst;
	holdsrc = (unsigned char *)src;
	if (holddst == NULL && holdsrc == NULL)
		return (NULL);
	while (n > 0)
	{
		*holddst = *holdsrc;
		holddst++;
		holdsrc++;
		n--;
	}
	return (dst);
}
