/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack_a_to_lis.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:39:23 by segan             #+#    #+#             */
/*   Updated: 2022/10/27 17:34:31 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_stack_a_to_lis(long *stack_a, long *stack_b, long *lis)
{
	int	lis_size;
	int	stack_a_size;

	stack_a_size = stacksize(stack_a);
	lis_size = stacksize(lis);
	while (stack_a_size)
	{
		if (*stack_a == *lis)
		{
			ra(stack_a);
			rotate(lis);
			lis_size--;
		}
		else
			pb(stack_a, stack_b);
		stack_a_size--;
	}
	free_arr(lis, NULL);
}
