/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:54:37 by segan             #+#    #+#             */
/*   Updated: 2022/10/24 09:59:03 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>

# define END 2147483648

char	**ft_split(char const *s, char c);
long	ft_atol(const char *str);
long	*parse_argv(int argc, char **argv);
int		measure_column(char *argv[]);
long	*convert_arr(char **argv);
void	free_2darr(char **temp);
void	print_error(void);
int		ft_isdigit(int c);
void	validation(long *stack_a);
int		stacksize(long *stack);
long	*create_stack(long *stack_a);
void	push(long *stack, long data);
long	pop(long *stack);
void	pa(long *stack_a, long *stack_b);
void	pb(long *stack_b, long *stack_a);
void	sa(long *stack_a);
void	sb(long *stack_b);
void	ss(long *stack_a, long *stack_b);
void	rotate(long *stack);
void	ra(long *stack_a);
void	rb(long *stack_b);
void	rr(long *stack_a, long *stack_b);
void	reverse_rotate(long *stack);
void	rra(long *stack_a);
void	rrb(long *stack_b);
void	rrr(long *stack_a, long *stack_b);

#endif
