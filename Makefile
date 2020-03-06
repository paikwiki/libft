# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chPaik <chPaik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/01 12:20:56 by cbaek             #+#    #+#              #
#    Updated: 2020/03/06 22:27:51 by chPaik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_strlen.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_atoi.c \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c \
		ft_bzero.c ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
		ft_memcmp.c ft_calloc.c ft_strdup.c ft_strtrim.c ft_strjoin.c \
		ft_substr.c ft_split.c ft_putchar_fd.c
OBJS = ft_strlen.o ft_strchr.o ft_strrchr.o ft_strnstr.o ft_atoi.o \
		ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o \
		ft_toupper.o ft_tolower.o ft_strlcpy.o ft_strlcat.o ft_strncmp.o \
		ft_bzero.o ft_memset.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o \
		ft_memcmp.o ft_calloc.o ft_strdup.o ft_strtrim.o ft_strjoin.o \
		ft_substr.o ft_split.o ft_putchar_fd.o
%.o: %.c
	$(CC) -c $(CFLAGS) -c $< -o $@
$(NAME): ${OBJS}
		ar rcs $@ ${OBJS}
all : $(NAME)
clean:
	rm -f *.o
	rm -f $(NAME)
fclean: clean
	rm -f $(NAME)
re : fclean all