/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpinto-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 18:24:46 by bpinto-d          #+#    #+#             */
/*   Updated: 2021/04/29 18:58:53 by bpinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*result;
	unsigned int	len1;
	unsigned int	len2;
	int				a;
	int				b;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = ((char *)malloc(sizeof(char) * (len1 + len2 + 1)));
	if (!result)
		return (NULL);
	a = 0;
	b = 0;
	while (s1[a])
		result[a++] = s1[b++];
	b = 0;
	while (s2[b])
		result[a++] = s2[b++];
	result[a] = '\0';
	return (result);
}
