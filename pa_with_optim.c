/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_with_optim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 23:29:52 by segan             #+#    #+#             */
/*   Updated: 2022/11/07 14:20:53 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	pa_with_optim(long *stack_a, long *stack_b)
{
	int	*mov_a;
	int	*mov_b;
	int	min_idx;
	int	count;

	while (*stack_b == LONG_MIN)
	{
		mov_b = get_b_mov(stack_b);
		mov_a = get_a_mov(stack_a, stack_b);
		min_idx = best_elem_to_mov(mov_a, mov_b, stacksize(stack_b));
		count = 0;
		if (mov_a[min_idx] * mov_b[min_idx] > 0)
		{
			if (mov_a[min_idx] > 0)
			{
				count = mov_a[min_idx] - mov_b[min_idx];
				while (count--)
					rr(stack_a, stack_b);
			}
			else
			{
				count = ft_abs(mov_a[min_idx] - mov_b[min_idx]);
				while (count--)
					rrr(stack_a, stack_b);
			}
		}
	}
	free_arr((long *)mov_a, (long *)mov_b);
}

int	*get_b_mov(long *stack_b)
{
	int	i;
	int	size;
	int	*mov_b;

	i = 0;
	size = stacksize(stack_b);
	mov_b = (int *)malloc(sizeof(int) * size);
	while (i < size)
	{
		if (i <= size / 2)
			mov_b[i] = i;
		else
			mov_b[i] = -(size - i);
	}
	return (mov_b);
}

int	*get_a_mov(long *stack_a, long *stack_b)
{
	int	size;
	int	*mov_a;
	int	i;
	int	count;

	count = 0;
	i = 0;
	size = stacksize(stack_b);
	mov_a = (int *)malloc(sizeof(int) * size);
	while (i < size)
		mov_a[i] = where_to_put_val(stack_a, stack_b[i]);
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
		if (value > stack_a[i])
			state = 1;
		if ((state == 1) && (stack_a[i] < value))
			break ;
		i++;
	}
	if (i <= size / 2)
		return (i);
	else
		return (-(size - i));
}

int	best_elem_to_mov(int *mov_a, int *mov_b, int size)
{
	int	i;
	int	min_idx;
	int	temp;

	i = 0;
	min_idx = INT_MAX;
	while (i < size)
	{
		if (mov_a[i] * mov_b[i] > 0)
			temp = ft_abs(mov_a[i] - mov_b[i]);
		if (mov_a[i] * mov_b[i] <= 0)
			temp = ft_abs(mov_a[i]) + ft_abs(mov_b[i]);
		min_idx = ft_min(temp, min_idx);
	}
	return (min_idx);
}
