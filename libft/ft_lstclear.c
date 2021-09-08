/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpinto-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 14:38:13 by bpinto-d          #+#    #+#             */
/*   Updated: 2021/04/29 18:37:54 by bpinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*one;

	while (*lst)
	{
		del((*lst)->content);
		one = *lst;
		*lst = one->next;
		free(one);
	}
	lst = NULL;
	return ;
}
