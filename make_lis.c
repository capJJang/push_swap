/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_lis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:32:55 by segan             #+#    #+#             */
/*   Updated: 2022/10/25 19:43:44 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

long	*get_lis(long *stack_a)
{
	int		i;
	int		k;
	long	*lis;
	int		*record;
	int		size;

	size = stacksize(stack_a);
	lis = (long *)malloc(sizeof(long) * size);
	record = (int *)malloc(sizeof(int) * size);
	k = 0;
	while (k < size)
	{
		i = 0;
		record[k] = 1;
		while (i < k)
		{
			if (stack_a[i] < stack_a[k])
			record[k] = max(record[k], record[i] + 1);
			i++;
		}
		k++;
	}
}

long	*make_lis(long *stack_a)
{
	long	*lis;

	pull_min_val_to_top(stack_a);
	lis = get_lis(stack_a);
	return (stack_a);
}
