/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpinto-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 15:09:30 by bpinto-d          #+#    #+#             */
/*   Updated: 2021/02/27 16:02:30 by bpinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*hold;
	int		len;
	int		b;

	if (!s1 || !set)
		return (0);
	b = 0;
	while (s1[b] && ft_strchr(set, s1[b]))
		b++;
	len = ft_strlen(s1);
	while (s1[len - 1] && ft_strchr(set, s1[len - 1]) && b < len)
		len--;
	hold = (char *)malloc(sizeof(char) * (len - b + 1));
	if (!hold)
		return (0);
	ft_strlcpy(hold, s1 + b, len - b + 1);
	return (hold);
}
