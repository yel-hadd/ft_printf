# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-hadd <yel-hadd@mail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 15:41:46 by yel-hadd          #+#    #+#              #
#    Updated: 2022/11/29 15:26:43 by yel-hadd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC := ft_putchar.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_putunbr.c \
	ft_putnbr_base.c \
	ft_printf.c \
	ft_putnbr_base_ptr.c

OBJ = $(SRC:c=o)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ) 
	@ar rc $(NAME) $(OBJ)

%.o : %.c ft_printf.h
	@cc ${CFLAGS} -c $<

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus