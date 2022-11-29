# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-hadd <yel-hadd@mail.com>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 15:41:46 by yel-hadd          #+#    #+#              #
#    Updated: 2022/11/28 21:28:31 by yel-hadd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS := -Wall -Wextra -Werror

HEADER := ft_printf.h

NAME := libftprintf.a

OBJ_DIR := Object_Files

SRC_FILES_M := ft_printf.c\
			ft_putchar.c\
			ft_putnbr.c\
			ft_putnbr_base.c\
			ft_putstr.c\
			ft_putnbr_base_ptr.c\
			ft_putunbr.c\
			
OBJ_FILES_M := $(addprefix $(OBJ_DIR)/, $(SRC_FILES_M:.c=.o))

.PHONY: clean fclean all re

all: $(NAME)

$(NAME): $(OBJ_FILES_M) $(HEADER)
	ar -rcs $(NAME) $(OBJ_FILES_M)

$(OBJ_DIR)/%.o:%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all
