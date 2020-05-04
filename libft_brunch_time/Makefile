# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isak <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/25 13:07:57 by isak              #+#    #+#              #
#    Updated: 2020/02/26 11:57:48 by isak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_strlen.c ft_strdup.c \
		ft_strcpy.c ft_strncpy.c \
		ft_strcat.c ft_strncat.c ft_strlcat.c\
		ft_strchr.c ft_strrchr.c \
		ft_strstr.c ft_strnstr.c \
		ft_strcmp.c ft_strncmp.c  \
		ft_atoi.c \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_toupper.c ft_tolower.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
		ft_memchr.c ft_memcmp.c ft_memmove.c \
		ft_putchar.c ft_putchar_fd.c ft_putstr.c ft_putstr_fd.c \
		ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c \
		ft_memalloc.c ft_memdel.c \
		ft_strnew.c ft_strdel.c ft_strclr.c \
		ft_striter.c ft_striteri.c ft_strequ.c ft_strnequ.c \
		ft_strmap.c ft_strmapi.c ft_strsub.c ft_strjoin.c \
		ft_strtrim.c ft_strsplit.c ft_itoa.c  \
		ft_lstnew.c ft_lstdelone.c ft_lstclear.c

#		ft_lstdel.c 
#		ft_lstadd.c ft_lstiter.c ft_lstmap.c

OBJECTS = $(SRCS:%.c=%.o)

INCLUDES = ./

FLAGS=-Wall -Wextra -Werror

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
