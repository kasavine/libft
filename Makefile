# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isak <isak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/25 13:07:57 by isak              #+#    #+#              #
#    Updated: 2020/04/21 17:15:47 by isak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
		ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c \
		ft_strlen.c ft_strdup.c ft_strchr.c ft_strrchr.c \
		ft_strnstr.c ft_strncmp.c ft_strlcat.c ft_strlcpy.c \
		ft_atoi.c \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJECTS = $(SRCS:%.c=%.o)

INCLUDES = ./

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS) libft.h
	gcc $(FLAGS) -I$(INCLUDES) -c $(SRCS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
		/bin/rm -f $(OBJECTS)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all

clean_all: fclean clean

.PHONY: clean fclean all re
