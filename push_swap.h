/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:54:37 by segan             #+#    #+#             */
/*   Updated: 2022/10/20 20:59:28 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>

# define END 2147483648
# define START -2147483649

char	**ft_split(char const *s, char c);
long	ft_atol(const char *str);
long	*parse_argv(int argc, char **argv);
int		measure_column(char *argv[]);
long	*convert_arr(char **argv);
void	free_2darr(char **temp);
void	print_error(void);
int		ft_isdigit(int c);
void	validation(long *stack_a);

#endif
