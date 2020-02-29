/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 22:02:20 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/29 11:51:17 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# define C_GREEN "\033[32m"

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include "../libft.h"

void test_ft_memset();
void test_ft_bzero();
void test_ft_memcpy();
void test_ft_memccpy();
void test_ft_memmove();
void test_ft_memchr();
void test_ft_memcmp();
void test_ft_strlen();
void test_ft_strlcpy();
void test_ft_strlcat();
void test_ft_strchr();
void test_ft_strrchr();
void test_ft_strnstr();
void test_ft_strncmp();
void test_ft_atoi();
void test_ft_isdigit();
void test_ft_isalpha();
void test_ft_isascii();
void test_ft_isalnum();
void test_ft_isprint();
void test_ft_toupper();
void test_ft_tolower();
#endif
