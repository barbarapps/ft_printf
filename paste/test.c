/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpinto-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:03:26 by bpinto-d          #+#    #+#             */
/*   Updated: 2021/09/10 17:34:42 by bpinto-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

void	check_leaks();

int		main()
{
	int		r;

	/* r = printf("%c%c%c ", '0', '0', '0');
	printf("\nr: %d\n", r);
	r = ft_printf("%c%c%c ", '0', '0', '0');
	printf("\nr: %d\n", r);
	//ft_printf("\nr: %d\n", r);
	r = printf(" %c ", '0');
	printf("\nr: %d\n", r);
	r = ft_printf(" %c ", '0');
	printf("\nr: %d\n", r);
	r = printf(" %c%c ", '0', '0');
	printf("\nr: %d\n", r);
	r = ft_printf(" %c%c ", '0', '0');
	printf("\nr: %d\n", r);
	r = printf(" NULL %s NULL ", NULL);
	printf("\nr: %d\n", r);
	r = ft_printf(" NULL %s NULL ", NULL);
	printf("\nr: %d\n", r);

	r = printf(" %p %p ", 0, 0);
	printf("\nr: %d\n", r);
	r = ft_printf(" %p %p ", 0, 0);

	printf("\nr: %d\n", r);
	
	r = printf("%p", -1);
	printf("\nr: %d\n", r);
	r = ft_printf("%p", -1);
	printf("\nr: %d\n", r);

*/
	r = printf("%-1s%-2s", "", "-");
	printf("\nr: %d\n", r);
	r = ft_printf("%-1s%-2s", "", "-");
	printf("\nr: %d\n", r);
	//check_leaks();
	return (0);
}
