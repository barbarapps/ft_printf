/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpinto-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:42:53 by bpinto-d          #+#    #+#             */
/*   Updated: 2021/05/05 18:08:05 by bpinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static void	check_malloc(char **split, int b, char **str)
{
	*str = ((char *)malloc(sizeof(char) * (b + 1)));
	if (!str)
		free_split(split);
}

static int	count(char const *s, char c)
{
	int	a;
	int	b;
	int	m;

	a = 0;
	b = 0;
	m = 0;
	while (s[a] != '\0')
	{
		if (s[a] == c)
		{
			if (b != 0)
				m++;
			b = 0;
		}
		else
			b++;
		a++;
	}
	if (b == 0)
		return (m + 0);
	return (m + 1);
}

static void	get_len(char const *s, char c, char **split, int len)
{
	int		a;
	int		b;
	int		m;
	char	*str;

	a = 0;
	b = 0;
	m = 0;
	str = NULL;
	while (m < len)
	{
		if (s[a] == c || s[a] == '\0')
		{
			if (b != 0)
			{
				check_malloc(split, b, &str);
				ft_strlcpy(str, s + a - b, b + 1);
				split[m++] = str;
			}
			b = 0;
		}
		else
			b++;
		a++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		len;

	if (!s)
		return (NULL);
	len = count(s, c);
	split = ((char **)malloc(sizeof(char *) * (len + 1)));
	if (!split)
		return (NULL);
	get_len(s, c, split, len);
	split[len] = NULL;
	return (split);
}
