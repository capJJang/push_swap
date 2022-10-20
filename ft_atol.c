/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:46:39 by segan             #+#    #+#             */
/*   Updated: 2022/10/20 19:46:54 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_atol(const char *str)
{
	int		sign;
	long	ret;

	sign = 1;
	ret = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		ret = ret * 10 + *str - '0';
		str++;
	}
	return (sign * ret);
}
