/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:14:56 by segan             #+#    #+#             */
/*   Updated: 2022/10/29 04:49:13 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	measure_column(char *argv[])
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	return (i);
}

long	*convert_arr(char **argv)
{
	int		len;
	int		i;
	long	*ret;

	i = 0;
	len = measure_column(argv);
	ret = (long *)malloc(sizeof(long) * (len + 1));
	while (argv[i])
	{
		ret[i] = ft_atol(argv[i]);
		if (ret[i] != (int)ret[i] || ft_isalpha(*argv[i++]) == 1)
			print_error();
	}
	free_2darr(argv);
	ret[i] = END;
	return (ret);
}

void	free_2darr(char **temp)
{
	size_t	i;

	i = 0;
	while (temp[i])
	{
		free(temp[i]);
		temp[i++] = NULL;
	}
	free(temp);
	temp = NULL;
}

long	*parse_argv(int argc, char **argv)
{
	int		i;
	char	**temp_argv;
	long	*ret;

	i = 0;
	if (argc == 2)
	{
		temp_argv = ft_split(argv[1], ' ');
		ret = convert_arr(temp_argv);
	}
	else if (argc >= 3)
	{
		ret = (long *)malloc(sizeof(long) * argc);
		while (i < argc - 1)
		{
			ret[i] = ft_atol(argv[i + 1]);
			if (ret[i] != (int)ret[i] || ft_isalpha(*argv[++i]) == 1)
				print_error();
		}
		ret[i] = END;
	}
	else
		exit(0);
	return (ret);
}
