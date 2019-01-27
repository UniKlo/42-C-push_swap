/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ch_ps.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 18:43:10 by khou              #+#    #+#             */
/*   Updated: 2019/01/25 00:34:55 by khou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CH_PS_H
# define CH_PS_H

/*
** -------------------------- External Headers ---------------------------------
*/

# include "../libft/include/libft.h"
# include "../libft/include/printf.h"
# include "../libft/include/get_next_line.h"


#include <stdio.h>

/*
** -------------------------- External Headers -----------------------------\
----
*/

typedef struct		s_stack
{
	struct s_stack	*nxt;
	struct s_stack  *pre;
	int				nbr;
//	char			tag;
	int				size;
}					t_stack;


/*
** -------------------------- External Headers -----------------------------\
\
----
*/

t_stack	*sa(t_stack *a);
t_stack	*ra(t_stack *a);
t_stack	*rra(t_stack *a);
t_stack	*pa(t_stack *a, t_stack *b);

# endif
