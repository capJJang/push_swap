/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_with_optim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 23:29:52 by segan             #+#    #+#             */
/*   Updated: 2022/11/11 16:45:39 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa_with_optim(long *stack_a, long *stack_b)
{
	t_optim_info	*optim_info;

	optim_info = (t_optim_info *)malloc(sizeof(t_optim_info));
	while (*stack_b != LONG_MIN)
	{
		optim_info->mov_b = get_b_mov(stack_b);
		optim_info->mov_a = get_a_mov(stack_a, stack_b);
		optim_info->min_mov_idx = pick_elem(optim_info, stacksize(stack_b));
		optim_rotate(stack_a, stack_b, optim_info);
		pa(stack_a, stack_b);
	}
	pull_min_val_to_top(stack_a);
	free(optim_info);
	optim_info = NULL;
}

long	*get_b_mov(long *stack_b)
{
	int		i;
	int		size;
	long	*mov_b;

	i = 0;
	size = stacksize(stack_b);
	mov_b = (long *)malloc(sizeof(long) * size);
	while (i < size)
	{
		if (i <= size / 2)
			mov_b[i] = i;
		else
			mov_b[i] = -(size - i);
		i++;
	}
	return (mov_b);
}

long	*get_a_mov(long *stack_a, long *stack_b)
{
	int		size;
	long	*mov_a;
	int		i;
	int		count;

	count = 0;
	i = 0;
	size = stacksize(stack_b);
	mov_a = (long *)malloc(sizeof(long) * size);
	while (i < size)
	{
		mov_a[i] = where_to_put_val(stack_a, stack_b[i]);
		i++;
	}
	return (mov_a);
}

int	where_to_put_val(long *stack_a, long value)
{
	int	state;
	int	i;
	int	size;

	state = 0;
	size = stacksize(stack_a);
	i = 0;
	while (i < size)
	{
		if ((state == 1) && (value < stack_a[i]))
			break ;
		if ((state == 1) && (stack_a[i - 1] > stack_a[i]))
			break ;
		if (value > stack_a[i])
			state = 1;
		i++;
	}
	if (state == 1 && i == size)
		i = 0;
	else if (i == size)
		i--;
	if (i <= size / 2)
		return (i);
	else
		return (-(size - i));
}

int	pick_elem(t_optim_info *info, int size)
{
	int	i;
	int	min_idx;
	int	min_val;
	int	temp;

	i = 0;
	min_val = INT_MAX;
	min_idx = INT_MAX;
	while (i < size)
	{
		if (info->mov_a[i] * info->mov_b[i] > 0)
			temp = ft_min(ft_abs(info->mov_a[i]), ft_abs(info->mov_b[i])) + \
			ft_abs(info->mov_a[i] - info->mov_b[i]);
		if (info->mov_a[i] * info->mov_b[i] <= 0)
			temp = ft_abs(info->mov_a[i]) + ft_abs(info->mov_b[i]);
		if (temp == ft_min(min_val, temp))
		{
			min_val = temp;
			min_idx = i;
		}
		i++;
	}
	return (min_idx);
}
