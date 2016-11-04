# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rchoquer <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 03:27:02 by rchoquer          #+#    #+#              #
#    Updated: 2016/11/04 07:16:36 by rchoquer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_C = srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c

SRC_O = ft_putchar.o \
		ft_putstr.o \
		ft_strcmp.o \
		ft_strlen.o \
		ft_swap.o 

all: $(NAME)

$(NAME):
	@gcc -Werror -Wextra -Wall -c $(SRC_C)
	@ar rc $(NAME) $(SRC_O)
	@ranlib $(NAME)


clean:
	@rm -f $(SRC_O)

fclean: clean
	@rm -f $(NAME)

re: fclean all
