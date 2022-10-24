/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 01:23:20 by segan             #+#    #+#             */
/*   Updated: 2022/10/24 03:51:59 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	push(long *stack, long data)
{
	int	i;

	i = 0;
	while (stack[i] != END)
		i++;
	i -= 2;
	while (i >= 0)
	{
		stack[i + 1] = stack[i];
		i--;
	}
	stack[0] = data;
	return ;
}

long	pop(long *stack)
{
	long	temp;

	temp = stack[0];
	rotate(stack);
	stack[stacksize(stack) - 1] = LONG_MIN;
	return (temp);
}

void	pa(long *stack_a, long *stack_b)
{
	if (stacksize(stack_b) == 0)
		return ;
	push(stack_a, pop(stack_b));
	write(1, "pa\n", 3);
}

void	pb(long *stack_a, long *stack_b)
{
	if (stacksize(stack_a) == 0)
		return ;
	push(stack_b, pop(stack_a));
	write(1, "pb\n", 3);
}
