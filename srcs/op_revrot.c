/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_revrot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 00:44:01 by khou              #+#    #+#             */
/*   Updated: 2019/01/25 00:33:35 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ch_ps.h"

t_stack	*rra(t_stack *a)
{
	if (a->pre)
		return (a->pre);
	else
		return (NULL);
}