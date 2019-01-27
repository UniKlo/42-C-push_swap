#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khou <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/22 18:08:35 by khou              #+#    #+#              #
#    Updated: 2018/11/20 19:00:11 by khou             ###   ########.fr        #
#                                                                              #
#******************************************************************************#

C = gcc

NAME1 = checker

NAME2 = push_swap

FLAGS = -g -Wall -Wextra -Werror

DIR_S = srcs

DIR_O = obj

HEADER = -I incl

CH_SOURCES = ch_main.c

PS_SOURCES = ps_main.c

CH_SRCS = $(addprefix $(DIR_S)/, $(CH_SOURCES))

PS_SRCS = $(addprefix $(DIR_S)/, $(PS_SOURCES))


all: $(NAME1) $(NAME2)

$(NAME1): $(CH_SRCS)
	@make -C libft/
	@$(C) libft/libft.a $(HEADER) $(FLAGS) $(CH_SRCS) -o $(NAME1)
	@echo "\033[32mBinary \033[1;32m$(NAME1)\033[1;0m\033[32m created.\033[0m"

$(NAME2): $(PS_SRCS)
	@$(C) libft/libft.a $(HEADER) $(FLAGS) $(PS_SRCS) -o $(NAME2)
	@echo "\033[32mBinary \033[1;32m$(NAME2)\033[1;0m\033[32m created.\033[0m"

clean:
	@make clean -C libft
	@echo "cleaned up objects"

fclean: clean
	@rm -f $(NAME1)
	@rm -f $(NAME2)
	@rm -f *~
	@rm -f \#*\#
	@rm -f include/*~
	@rm -f include/\#*\#
	@rm -f srcs/*~
	@rm -f srcs/\#*\#
	@rm -f srcs/.#*
	@rm -f a.out
	@rm -rf *dSYM
	@make fclean -C libft
	@echo "reset"

re: fclean all

.PHONY: fclean re norme all clean
