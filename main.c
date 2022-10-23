/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:54:09 by segan             #+#    #+#             */
/*   Updated: 2022/10/23 03:55:07 by segan            ###   ########.fr       */
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

	for (size_t i = 0; i < 4; i++)
		printf ("%ld\t\t %ld\n", stack_a[i], stack_b[i]);
	printf("\n\n");
	pop(stack_a);
	push(stack_b, 1);
	for (size_t i = 0; i < 4; i++)
		printf ("%ld\t\t %ld\n", stack_a[i], stack_b[i]);
	printf("\n\n");
	push(stack_b, 123);
	printf("\n\n");
	for (size_t i = 0; i < 4; i++)
		printf ("%ld\t\t %ld\n", stack_a[i], stack_b[i]);
	free(stack_a);	free(stack_b);
}


//for (size_t i = 0; i < 4; i++)
//	printf ("%ld\t %ld\n", stack_a[i], stack_b[i]);