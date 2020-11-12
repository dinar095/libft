# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: desausag <desausag@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/04 12:21:58 by desausag          #+#    #+#              #
#    Updated: 2020/11/11 16:56:26 by desausag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
FUNCTIONS = ft_isalnum \
				ft_isalpha \
				ft_isdigit \
				ft_isascii \
				ft_isprint \
				ft_strlen \
				ft_strncmp \
				ft_strrchr \
				ft_tolower \
				ft_toupper \
				ft_atoi \
				ft_memset \
				ft_bzero \
				ft_memcpy \
				ft_memccpy \
				ft_memmove \
				ft_memchr \
				ft_memcmp \
				ft_strchr \
				ft_strlcat \

OBJ = $(patsubst %,%.o,$(FUNCTIONS))
SRC = $(patsubst %,%.c,$(FUNCTIONS))

.PHONY: all clean fclean re

all: $(NAME)
	@true
libft.a:
	CC -I $(CFLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all