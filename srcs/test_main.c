/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 17:50:14 by khou              #+#    #+#             */
/*   Updated: 2019/01/25 00:32:41 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../incl/ch_ps.h"



int		main()
{
	t_stack a[5];
	t_stack b[5];

	a[0].nbr = 7;
	a[1].nbr = 5;
	a[2].nbr = 3;
	a[3].nbr = 1;
	a[4].nbr = -9;

	a[0].tag = 'H';
	a[1].tag = 1;
	a[2].tag = 1;
	a[3].tag = 1;
	a[4].tag = '\0';

	a[0].nxt = &a[1];
	a[1].nxt = &a[2];
	a[2].nxt = &a[3];
	a[3].nxt = &a[4];
	a[4].nxt = &a[0];

	a[0].pre = &a[4];
    a[1].pre = &a[0];
    a[2].pre = &a[1];
    a[3].pre = &a[2];
	a[4].pre = &a[3];


	
	int i = 0;
	while (i < 5)
	{
		printf("%d ", a[i++].nbr);
	}
	printf("\n");

	t_stack	*ret = rra(a);

	i = 0;
    while (i < 5)
	{
        printf("%d ", ret->nbr);
		ret = ret->nxt;
		i++;
	}
	printf("\n");

}
	
