/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:40:54 by segan             #+#    #+#             */
/*   Updated: 2022/10/24 02:20:23 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

void	rotate(long *stack)
{
	int		i;
	int		size;
	long	temp;

	i = 0;
	size = stacksize(stack);
	temp = stack[0];
	while (i < size)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[size - 1] = temp;
	return ;
}

void	ra(long *stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(long *stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rr(long *stack_a, long *stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}
