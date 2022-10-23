/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:29:31 by segan             #+#    #+#             */
/*   Updated: 2022/10/22 01:35:33 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	sa(long *stack_a)
{
	long	temp;

	if (stacksize(stack_a) <= 0)
		return ;
	temp = stack_a[1];
	stack_a[1] = stack_a[2];
	stack_a[2] = temp;
	write(1, "sa\n", 3);	
}

void	sb(long *stack_b)
{
	long	temp;

	if (stacksize(stack_b) <= 0)
		return ;
	temp = stack_b[1];
	stack_b[1] = stack_b[2];
	stack_b[2] = temp;
	write(1, "sb\n", 3);
}

void	ss(long *stack_a, long *stack_b)
{
	long	temp;

	if (stacksize(stack_a) <= 0 || stacksize(stack_b) <= 0)
		return ;
	temp = stack_a[1];
	stack_a[1] = stack_a[2];
	stack_a[2] = temp;
	temp = stack_b[1];
	stack_b[1] = stack_b[2];
	stack_b[2] = temp;
	write(1, "ss\n", 3);
}