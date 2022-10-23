/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 01:23:20 by segan             #+#    #+#             */
/*   Updated: 2022/10/23 05:00:00 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	push(long *stack, long data)
{
	int		i;
	
	i = 0;
	while (stack[i] != END)
		i++;
	i -= 2;
	while (i >= 1)
	{
		stack[i + 1] = stack[i];
		i--;
	}
	stack[1] = data;
	return ;
}

long	pop(long *stack)
{
	long	temp;
	int		size;
	int		i;

	i = 1;
	size = stacksize(stack);
	temp = stack[1];
	while (i < size)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[size] = LONG_MIN;
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
	write(1, "pa\n", 3);
}