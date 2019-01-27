/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 23:55:24 by khou              #+#    #+#             */
/*   Updated: 2019/01/24 23:22:07 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ch_ps.h"

t_stack	new_element()
{
	t_stack new;
	new = malloc(sizeof(t_stack));
	return (&new);
}
		

t_stack	*pa(t_stack *a, t_stack *b)
{
//	t_stack tmp;
	t_stack new;
//	tmp = *a;
	a->pre->nxt = a->nxt;
	a->nxt->pre = a->pre;
	//free(a);
	new = new_element();
	new.nbr = a->nbr;
	new.nxt = b;
	new.pre = &b->pre;
	b->prv->nxt = new;
	b->prv = new;
	
	
		
	return (new);
	
}
