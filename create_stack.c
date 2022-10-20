/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:47:18 by segan             #+#    #+#             */
/*   Updated: 2022/10/20 21:53:14 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	*create_stack(long *stack_a)
{
	int		size;
	long	*stack_b;

	size = 0;
	while (stack_a[size] == END)
		size++;
	stack_b = (long *)malloc(sizeof(long) * size);
	stack_b[0] = START;
	stack_b = END;
	return (stack_b);
}
