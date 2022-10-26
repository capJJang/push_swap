/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_lis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:32:55 by segan             #+#    #+#             */
/*   Updated: 2022/10/26 20:26:39 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	*get_real_lis(int *lis_index, int *dp, long *stack_a)
{
	int	i;
	int	max;
	int	from;
	int	j;
	int	*real_lis;

	i = 0;
	max = 0;
	real_lis = (int *)malloc(sizeof(dp) / sizeof(*dp));
	while (i < sizeof(dp) / sizeof(*dp))
	{
		if (dp[i] > max)
			max = dp[i];
		i++;
	}
	while (max != 0)
	{
		from = get_index(dp, max);
		real_lis[max] = stack_a[from];
	}
	real_lis[0] = stack_a[0];
	free_arr(lis_index, dp);
	return (real_lis);
}

//dp배열 내부의 최대값을 찾음
//최대값

int	*get_lis(long *stack_a)
{
	int		i;
	int		j;
	long	*lis_index;
	int		*dp;

	lis_index = (int *)malloc(sizeof(int) * sizeof(stack_a) / sizeof(*stack_a));
	dp = (int *)malloc(sizeof(int) * sizeof(stack_a) / sizeof(*stack_a));
	i = -1;
	while (++i < sizeof(stack_a) / sizeof(*stack_a))
	{
		j = -1;
		dp[i] = 1;
		while (++j < i)
		{
			if (stack_a[j] < stack_a[i])
			{
				dp[i] = max(dp[i], dp[j] + 1);
				lis_index[i] = j;
			}
		}
	}
	return (get_real_lis(lis_index, dp, stack_a));
}

void	pull_min_val_to_top(long *stack_a)
{
	int	min;
	int	min_index;
	int	i;

	i = 0;
	min = INT_MAX;
	while (stack_a[i] != END)
	{
		if (stack_a[i] < min)
		{
			min = stack_a[i];
			min_index = i;
		}
		i++;
	}
	if (stacksize(stack_a) - min_index < min_index)
	{
		min_index = stacksize(stack_a) - min_index;
		while (min_index--)
			rra(stack_a);
	}
	else
		while (min_index--)
			ra(stack_a);
}

long	*make_lis(long *stack_a)
{
	int	*lis;

	pull_min_val_to_top(stack_a);
	lis = get_lis(stack_a);
	for(int i = 0; i < sizeof(lis) / sizeof(*lis); i++)
		printf("%d \t", lis[i]);
	return (stack_a);
}
