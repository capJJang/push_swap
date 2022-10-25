/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   some_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:10:58 by segan             #+#    #+#             */
/*   Updated: 2022/10/25 18:17:49 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_index(long *arr, int value)
{
	int	i;
	int	len;

	len = sizeof(*arr) / sizeof(arr);
	i = 0;
	while (i < len)
	{
		if (arr[i] == value)
			return (i);
	}
	return (-1);
}

int	min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

int	max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
