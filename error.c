/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:55:12 by segan             #+#    #+#             */
/*   Updated: 2022/11/11 17:09:00 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	print_error(void)
{
	write(1, "Error\n", 6);
	exit(-1);
}

long	*malloc_error(void)
{
	write(1, "Malloc failed\n", 14);
	exit(-1);
}
