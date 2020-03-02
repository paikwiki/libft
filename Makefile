# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/01 12:20:56 by cbaek             #+#    #+#              #
#    Updated: 2020/03/03 00:51:26 by cbaek            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_strlen.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c
OBJS = ft_strlen.o ft_strchr.o ft_strrchr.o ft_strnstr.o ft_atoi.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_strlcpy.o ft_strlcat.o ft_strncmp.o
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