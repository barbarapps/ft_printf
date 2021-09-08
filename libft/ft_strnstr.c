/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpinto-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 12:20:15 by bpinto-d          #+#    #+#             */
/*   Updated: 2021/04/29 18:45:25 by bpinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len2;

	if (*needle == '\0')
		return ((char *)haystack);
	len2 = ft_strlen(needle);
	while (*haystack != '\0' && len2 <= len--)
	{
		if (*needle == *haystack && ft_strncmp(haystack, needle, len2) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
