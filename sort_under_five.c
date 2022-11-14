/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_under_five.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 22:58:35 by segan             #+#    #+#             */
/*   Updated: 2022/11/14 00:55:18 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_under_five(long *stack_a, long *stack_b)
{
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	sort_three(stack_a, stack_b);
	pa_with_optim(stack_a, stack_b);
}

void	sort_three(long *stack_a, long *stack_b)
{
	
}
