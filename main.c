/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:54:09 by segan             #+#    #+#             */
/*   Updated: 2022/11/14 13:50:01 by segan            ###   ########.fr       */
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
		sort_three(stack_a);
	else if (stacksize(stack_a) <= 5 && stacksize(stack_a) >= 4)
	{
		sort_under_five(stack_a, stack_b);
		exit(0);
	}
	make_lis(stack_a, stack_b);
	pa_with_optim(stack_a, stack_b);
	free_arr(stack_a, stack_b);
	return (0);
}
