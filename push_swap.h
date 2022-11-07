/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:54:37 by segan             #+#    #+#             */
/*   Updated: 2022/11/07 14:19:43 by segan            ###   ########.fr       */
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
int		ft_isalpha(int c);
void	validation(long *stack_a);
int		stacksize(long *stack);
long	*create_stack(long *stack_a);
void	push(long *stack, long data);
long	pop(long *stack);
void	pa(long *stack_a, long *stack_b);
void	pb(long *stack_a, long *stack_b);
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
void	make_lis(long *stack_a, long *stack_b);
void	pull_min_val_to_top(long *stack_a);
int		get_index(long *arr, int value);
int		ft_min(int a, int b);
int		ft_max(int a, int b);
int		ft_abs(int a);
long	*get_lis(long *stack_a);
void	update_dp_index(long *dp, long *lis_index, int i, int j);
long	*get_real_lis(long *lis, long *dp, long *stack_a);
void	free_arr(long *arr1, long *arr2);
void	make_stack_a_to_lis(long *stack_a, long *stack_b, long *lis);
int		is_sorted(long *stack);
void	pa_with_optim(long *stack_a, long *stack_b);
int		*get_b_mov(long *stack_b);
int		*get_a_mov(long *stack_a, long *stack_b);
int		where_to_put_val(long *stack_a, long value);
int		best_elem_to_mov(int *mov_a, int *mov_b, int size);
void	real_pa(long *stack_a, long *stack_b, int min_idx);

#endif
