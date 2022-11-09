/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optim_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:46:50 by segan             #+#    #+#             */
/*   Updated: 2022/11/09 18:43:56 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	optim_rotate(long *stack_a, long *stack_b, t_optim_info *optim_info)
{
	int	idx;

	idx = optim_info->min_mov_idx;
	if (optim_info->mov_a[idx] * optim_info->mov_b[idx] > 0)
	{
		if (optim_info->mov_a[idx] > 0)
		{
			while (optim_info->mov_a[idx]-- && optim_info->mov_b[idx]--)
				rr(stack_a, stack_b);
		}
		else
		{
			while (optim_info->mov_a[idx]++ && optim_info->mov_b[idx]++)
				rrr(stack_a, stack_b);
		}
	}
	optim_rotate2(stack_a, stack_b, optim_info);
}

void	optim_rotate2(long *stack_a, long *stack_b, t_optim_info *optim_info)
{
	if (optim_info->mov_a[optim_info->min_mov_idx] > 0)
	{
		while (optim_info->mov_a[optim_info->min_mov_idx]--)
			ra(stack_a);
	}
	else if (optim_info->mov_a[optim_info->min_mov_idx] < 0)
	{
		while (optim_info->mov_a[optim_info->min_mov_idx]++)
			rra(stack_a);
	}
	if (optim_info->mov_b[optim_info->min_mov_idx] > 0)
	{
		while (optim_info->mov_b[optim_info->min_mov_idx]--)
			rb(stack_b);
	}
	else if (optim_info->mov_b[optim_info->min_mov_idx] < 0)
	{
		while (optim_info->mov_b[optim_info->min_mov_idx]++)
			rra(stack_a);
	}
	free_arr(optim_info->mov_a, optim_info->mov_b);
}
