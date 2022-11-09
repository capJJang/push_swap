# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: segan <segan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 21:50:22 by segan             #+#    #+#              #
#    Updated: 2022/11/09 19:32:16 by segan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address -o

SRCS = main.c parse_argv.c print_error.c validation.c ft_atol.c create_stack.c\
		sa_sb_ss.c pa_pb.c ra_rb_rr.c rra_rrb_rrr.c make_lis.c some_utils.c\
		free_arr.c make_stack_a_to_lis.c pa_with_optim.c optim_rotate.c

STATICLIB_PATH = ./libft

STATICLIB_NAME = ft

all : $(NAME)

$(NAME) :
	make -C libft
	$(CC) $(CFLAGS) $(NAME) $(SRCS) -L$(STATICLIB_PATH) -l$(STATICLIB_NAME)

clean :
	make clean -C libft

fclean :
	make fclean -C libft
	rm -f $(NAME)
	rm -rf $(NAME).dSYM

re :
	make fclean
	make all

.Phony : all clean fclean re
