/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:54:09 by segan             #+#    #+#             */
/*   Updated: 2022/10/20 21:17:45 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	long	*stack_a;

	stack_a = parse_argv(argc, argv);
	for (int i = 0; i < 6; i++)
		printf("%ld", stack_a[i]);
	//validation(stack_a);
}
