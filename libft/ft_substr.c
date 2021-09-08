/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpinto-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 15:19:21 by bpinto-d          #+#    #+#             */
/*   Updated: 2021/05/05 17:48:57 by bpinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*s1;

	s1 = NULL;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		s1 = ft_strdup("");
		return (s1);
	}
	if (len > ft_strlen(s))
	{
		s1 = ((char *)malloc(sizeof(char) * (ft_strlen(s) + 1)));
		if (!s1)
			return (0);
	}
	else
	{
		s1 = ((char *)malloc(sizeof(char) * (len + 1)));
		if (!s1)
			return (0);
	}
	ft_strlcpy(s1, s + start, len + 1);
	return (s1);
}
