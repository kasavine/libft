# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: isak <isak@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/25 13:07:57 by isak              #+#    #+#              #
#    Updated: 2020/04/22 13:08:51 by isak             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
FLAGS		= -Wall -Wextra -Werror
LIB_C		= ar -rc
LIB_R		= ranlib
RM			= /bin/rm -f

NAME		= libft.a

INCLUDE		= libft.h

SRC			= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
				ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c \
				ft_strlen.c ft_strdup.c ft_strchr.c ft_strrchr.c \
				ft_strnstr.c ft_strncmp.c ft_strlcat.c ft_strlcpy.c \
				ft_atoi.c \
				ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
				ft_toupper.c ft_tolower.c \
				ft_substr.c ft_strjoin.c\
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ 		= $(SRC:%.c=%.o)

BONUS_SRC	= ft_strcpy_bonus.c ft_strcat_bonus.c

BONUS_OBJ	= $(BONUS_SRC:%.c=%.o)

all: 		$(NAME)
$(NAME): 	$(OBJ) $(INCLUDE)
			$(LIB_C) $(NAME) $(OBJ)
			$(LIB_R) $(NAME)

bonus:		$(NAME) $(BONUS_OBJ)
			$(LIB_C) $(NAME) $(BONUS_OBJ)
			$(LIB_R) $(NAME)

.c.o:
			$(CC) $(FLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)
clean:
			$(RM) $(OBJ)
			$(RM) $(BONUS_OBJ)

fclean:		clean
			$(RM) $(NAME)

re: 		fclean all

bonus_re:	fclean bonus

.PHONY:		clean fclean all re bonus bonus_re
