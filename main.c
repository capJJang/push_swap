/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:54:09 by segan             #+#    #+#             */
/*   Updated: 2022/11/14 00:55:30 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	long	*stack_a;
	long	*stack_b;

	stack_a = parse_argv(argc, argv);
	validation(stack_a);
	stack_b = create_stack(stack_a);
	if (stacksize(stack_a) == 3)
		sort_under_three(stack_a, stack_b);
	if (stacksize(stack_a) == 5)
		sort_under_five(stack_a, stack_b);
	make_lis(stack_a, stack_b);
	pa_with_optim(stack_a, stack_b);
	free(stack_a);
	free(stack_b);
	return (0);
}
