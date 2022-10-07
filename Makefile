# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svkhacha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 19:46:20 by svkhacha          #+#    #+#              #
#    Updated: 2022/09/14 19:53:25 by svkhacha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap
SRCS		=	$(wildcard *.c)
OBJS		=	$(patsubst %.c, %.o, $(SRCS))
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -f

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) :  $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(NAME) created !$(END)"

clean :
	@$(RM) $(OBJS)
	@echo "$(YELLOW)Object files deleted !$(END)"

fclean : clean
	@$(RM) $(NAME)
	@echo "$(RED)All deleted !$(END)"

re : fclean all

.PHONY : all clean fclean re

#Makefile_Colors
GREEN = \033[1;32m
BLUE = \033[0;34m
YELLOW = \033[1;33m
RED=\033[0;31m
END = \033[0m

