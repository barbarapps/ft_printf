/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_positive.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpinto-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 16:03:26 by bpinto-d          #+#    #+#             */
/*   Updated: 2021/09/10 00:59:26 by balibala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

int		main()
{
	int		r;

	printf(" ------------ TEST POSITIVE NUMBER ---------- \n ------- WITH FLAGS ------- \n ---------  ' '  -   0   -------\n\n");
	printf ("TESTE 1 -- %%d %%d %%d  -- 1 -- 10 -- 100 ------------------------------- \n\n");
	
	r = printf("%d %d %d ", 1, 10, 100);
	printf("\nr: %d\n", r);
	printf("\n");

	r = ft_printf("%d %d %d ", 1, 10, 100);
	printf("\nr: %d\n", r);
	printf("\n");

	printf("TESTE 2 -- %%-05d -- 15 --------------------------------------------------- \n\n");
	
	r = printf("%-05d", 15);
	printf("\nr: %d\n", r);
	printf("\n");

	r = printf("%-05d", 15);
	printf("\nr: %d\n", r);
	printf("\n");

	printf("TESTE 3 -- %%05d -- 15 ---------------------------------------------------- \n\n");
	r = printf("%05d", 15);
	printf("\nr: %d\n", r);
	printf("\n");
	//---------------
	r = ft_printf("%05d", 15);
	printf("\nr: %d\n", r);
	printf("\n");
	//--------------
	
	printf("TESTE 4 -- %%5d -- 15 	---- TESTING WIDTH = 5 ----------------------------------- \n\n");
	r = printf("%5d", 15);
	printf("\nr: %d\n", r);
	printf("\n");
	//-------------
	r = ft_printf("%5d", 15);
	printf("\nr: %d\n", r);
	printf("\n");
	
	printf("TESTE 5 -- %% -05d -- 15	----  TESTING  FLAG->SPACE && FLAG->MINUS && FLAG->MIN_WIDTH = 5 \n ---- FLAG->ZERO IS IGNORED WHILE FLAG->SPACE IS PRESENT --- \n\n");
	r = printf("% -05d", 15);
	printf("\nr: %d\n", r);
	printf("\n");
	
	r = ft_printf("% -05d", 15);
	printf("\nr: %d\n", r);
	printf("\n");

	printf("TESTE 6 -- %%d -- 15  ---------------------------------------------------\n\n");
	r = printf("%d", 15);
	printf("\nr: %d\n", r);
	printf("\n");
	
	r = ft_printf("%d", 15);
	printf("\nr: %d\n", r);
	printf("\n");
	
	printf("TESTE 7 -- %% d -- 15  ---------------------------------------------------\n\n");
	r = printf("% d", 15);
	printf("\nr: %d\n", r);
	printf("\n");
	
	r = ft_printf("% d", 15);
	printf("\nr: %d\n", r);

	/*r = printf(" %c ", '0');
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
*/

	return (0);
}
