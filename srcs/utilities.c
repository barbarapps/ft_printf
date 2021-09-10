/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balibala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 20:36:29 by balibala          #+#    #+#             */
/*   Updated: 2021/09/10 16:19:39 by bpinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
	return (index);
}

char	*add_ptr(char *str)
{
	char	*tmp;

	tmp = str;
	str = ft_strjoin("0x", tmp);
	//printf("\n\%s\n\n", str); 
	free(tmp);
	return (str);
}
