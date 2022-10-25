/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:54:09 by segan             #+#    #+#             */
/*   Updated: 2022/10/25 17:57:59 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	long	*stack_a;
	long	*stack_b;

	stack_a = parse_argv(argc, argv);
	validation(stack_a);
	stack_b = create_stack(stack_a);
	for (size_t i = 0; stack_a[i] != END; i++)
		printf ("%ld\t\t %ld\n", stack_a[i], stack_b[i]);
	printf("\n\n");
	make_lis(stack_a);
	for (size_t i = 0; stack_a[i] != END; i++)
		printf ("%ld\t\t %ld\n", stack_a[i], stack_b[i]);
	free(stack_a);
	free(stack_b);
	return (0);
}
