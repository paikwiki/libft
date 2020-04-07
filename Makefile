# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/01 12:20:56 by cbaek             #+#    #+#              #
#    Updated: 2020/04/07 15:30:08 by cbaek            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
SRCS_BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
OBJS = $(SRCS:%.c=%.o)
OBJS_BONUS = $(SRCS_BONUS:%.c=%.o)

OBJ_FILES = ${OBJS} $(OBJS_BONUS)

# ifdef WITH_BONUS
# 	OBJ_FILES = ${OBJS} $(OBJS_BONUS)
# else
# 	OBJ_FILES = ${OBJS}
# endif

%.o: %.c
	$(CC) -c $(CFLAGS) -c $< -o $@
$(NAME): ${OBJ_FILES}
	ar rcs $@ ${OBJ_FILES}
all: $(NAME)
bonus:
	make WITH_BONUS=1 all
clean:
	rm -f ${OBJS} $(OBJS_BONUS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all bonus clean fclean re .c.o
