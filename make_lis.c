/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_lis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:32:55 by segan             #+#    #+#             */
/*   Updated: 2022/11/14 14:21:45 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*get_real_lis(long *lis_index, long *dp, long *stack_a)
{
	int		i;
	int		max;
	int		from;
	int		size;
	long	*real_lis;

	i = -1;
	max = 0;
	size = stacksize(stack_a);
	real_lis = malloc_with_null_protection(sizeof(long), (size + 1));
	while (++i < size)
	{
		if (dp[i] > max)
			max = dp[i];
	}
	real_lis[max] = END;
	from = get_index(dp, max);
	while (from != 0)
	{
		real_lis[--max] = stack_a[from];
		from = lis_index[from];
	}
	real_lis[0] = stack_a[0];
	free_arr(lis_index, dp);
	return (real_lis);
}

long	*get_lis(long *stack_a)
{
	int		i;
	int		j;
	int		size;
	long	*lis_index;
	long	*dp;

	size = stacksize(stack_a);
	lis_index = malloc_with_null_protection(sizeof(long), size);
	dp = malloc_with_null_protection(sizeof(long), (size + 1));
	i = -1;
	while (++i < size)
	{
		j = -1;
		dp[i] = 1;
		while (++j < i)
		{
			if (stack_a[j] < stack_a[i])
				update_dp_index(dp, lis_index, i, j);
		}
	}
	dp[i] = END;
	return (get_real_lis(lis_index, dp, stack_a));
}

void	pull_min_val_to_top(long *stack)
{
	int	min;
	int	min_index;
	int	i;

	i = -1;
	min = INT_MAX;
	while (stack[++i] != END)
	{
		if (stack[i] == LONG_MIN)
			break ;
		if (stack[i] < min)
		{
			min = stack[i];
			min_index = i;
		}
	}
	if (stacksize(stack) - min_index < min_index)
	{
		min_index = stacksize(stack) - min_index;
		while (min_index--)
			rra(stack);
	}
	else
		while (min_index--)
			ra(stack);
}

void	make_lis(long *stack_a, long *stack_b)
{
	long	*lis;

	pull_min_val_to_top(stack_a);
	lis = get_lis(stack_a);
	make_stack_a_to_lis(stack_a, stack_b, lis);
}
