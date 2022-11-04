/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack_a_to_lis.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:39:23 by segan             #+#    #+#             */
/*   Updated: 2022/11/04 13:29:51 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_stack_a_to_lis(long *stack_a, long *stack_b, long *lis)
{
	int	stack_a_size;

	stack_a_size = stacksize(stack_a);
	if (is_sorted(stack_a) == 1)
		return (free_arr(lis, NULL));
	while (stack_a_size)
	{
		if (*stack_a == *lis)
		{
			ra(stack_a);
			rotate(lis);
		}
		else
			pb(stack_a, stack_b);
		stack_a_size--;
	}
	free_arr(lis, NULL);
}

int	is_sorted(long *stack)
{
	int	i;
	int	size;

	i = 0;
	size = stacksize(stack);
	while (i < size - 1)
	{
		if (stack[i] > stack[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	update_dp_index(long *dp, long *lis_index, int i, int j)
{
	if (dp[i] < dp[j] + 1)
	{
		dp[i] = dp[j] + 1;
		lis_index[i] = j;
	}
}
