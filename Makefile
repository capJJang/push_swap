# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: segan <segan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/19 21:50:22 by segan             #+#    #+#              #
#    Updated: 2022/10/20 21:48:35 by segan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror -g3 -fsanitize=address -o

SRCS = main.c parse_argv.c print_error.c validation.c ft_atol.c create_stack.c

STATICLIB_PATH = ./libft

STATICLIB_NAME = ft

all : $(NAME)

$(NAME) :
	make -C libft
	$(CC) $(CFLAGS) $(NAME) $(SRCS) -L$(STATICLIB_PATH) -l$(STATICLIB_NAME)

clean :
	make clean -C libft
	make -C libft

fclean :
	make fclean -C libft
	rm -f $(NAME)

re :
	make fclean
	make all

.Phony : all clean fclean re
