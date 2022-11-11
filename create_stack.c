/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:47:18 by segan             #+#    #+#             */
/*   Updated: 2022/11/11 17:10:31 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stacksize(long *stack)
{
	int	size;

	size = 0;
	while (stack[size] != END && stack[size] != LONG_MIN)
		size++;
	return (size);
}

long	*create_stack(long *stack_a)
{
	long	*stack_b;
	int		size;
	int		i;

	size = stacksize(stack_a);
	stack_b = malloc_with_null_protection(sizeof(long), (size + 1));
	i = 0;
	while (i < size)
		stack_b[i++] = LONG_MIN;
	stack_b[i] = END;
	return (stack_b);
}
