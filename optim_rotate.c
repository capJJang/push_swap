/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optim_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:46:50 by segan             #+#    #+#             */
/*   Updated: 2022/11/08 18:38:30 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
}
