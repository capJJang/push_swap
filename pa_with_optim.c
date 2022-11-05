/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_with_optim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 23:29:52 by segan             #+#    #+#             */
/*   Updated: 2022/11/05 15:25:34 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	pa_with_optim(long *stack_a, long *stack_b)
{
	int	*mov_a;
	int	*mov_b;
	int	stack_b_size;

	while (*stack_b == LONG_MIN)
	{
		mov_b = get_b_mov(stack_b);
		mov_a = get_a_mov(stack_a, stack_b);
	}
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
	int	mov_a;
	int	i;
	int	count;

	count = 0;
	i = 0;
	size = stacksize(stack_b);
	mov_a = (int *)malloc(sizeof(int) * size);
	while (i < size)
	{
		stack
	}
}
