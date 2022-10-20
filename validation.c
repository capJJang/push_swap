/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:06:54 by segan             #+#    #+#             */
/*   Updated: 2022/10/20 21:01:54 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	validation(long *stack_a)
{
	int	i;
	int	j;

	i = 1;
	while (stack_a[i] != END)
	{
		j = i + 1;
		while (stack_a[j] != END)
		{
			if (stack_a[i] == stack_a[j])
				print_error();
			j++;
		}
		i++;
	}
}
