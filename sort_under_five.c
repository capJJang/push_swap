/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_five.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:58:35 by segan             #+#    #+#             */
/*   Updated: 2022/11/14 14:18:51 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	sort_under_five(long *stack_a, long *stack_b)
{
	if (is_sorted(stack_a))
		return ;
	pull_min_val_to_top(stack_a);
	pb(stack_a, stack_b);
	if (stacksize(stack_a) == 4)
	{
		pull_min_val_to_top(stack_a);
		pb(stack_a, stack_b);
	}
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	sort_three(long *stack_a)
{
	if (is_sorted(stack_a))
		return ;
	if (stack_a[0] > stack_a[1])
		sa(stack_a);
	if (stack_a[2] < stack_a[0])
		rra(stack_a);
	if (stack_a[2] < stack_a[1])
	{
		rra(stack_a);
		sa(stack_a);
	}
}
