/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   some_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:10:58 by segan             #+#    #+#             */
/*   Updated: 2022/11/11 17:06:01 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(long *arr, int value)
{
	int	len;

	len = stacksize(arr);
	while (len--)
	{
		if (arr[len] == value)
			return (len);
	}
	return (0);
}

int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int	ft_abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}

long	*malloc_with_null_protection(int size, int count)
{
	long	*ret;

	ret = (long *)malloc(size * count);
	if (!ret)
		return (malloc_error());
	return (ret);
}
