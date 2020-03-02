/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 22:24:47 by cbaek             #+#    #+#             */
/*   Updated: 2020/03/03 00:43:58 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void cleandst(char *str)
{
	int i;

	i = 6;
	while (i < 16)
		str[i++] = 0;
}

void	test_ft_strlcat()
{
	char dst[16] = "Hello-";
	char src[] = "World!";
	size_t x;
	size_t y;

assert(ft_strlcat(dst, src, 0) == strlcat(dst, src, 0) && "test_tf_strlcat()");
cleandst(dst);
assert(ft_strlcat(dst, src, 2) == strlcat(dst, src, 2) && "test_tf_strlcat()");
cleandst(dst);
assert(ft_strlcat(dst, src, 6) == strlcat(dst, src, 6) && "test_tf_strlcat()");\
x = ft_strlcat(dst, src, 0);
cleandst(dst);
y = strlcat(dst, src, 0);
cleandst(dst);
assert(x == y && "test_tf_strlcat()");
x = ft_strlcat(dst, src, 2);
cleandst(dst);
y = strlcat(dst, src, 2);
cleandst(dst);
assert(x == y && "test_tf_strlcat()");
x = ft_strlcat(dst, src, 6);
cleandst(dst);
y = strlcat(dst, src, 6);
cleandst(dst);
assert(x == y && "test_tf_strlcat()");
x = ft_strlcat(dst, src, 7);
cleandst(dst);
y = strlcat(dst, src, 7);
cleandst(dst);
assert(x == y && "test_tf_strlcat()");
x = ft_strlcat(dst, src, 11);
cleandst(dst);
y = strlcat(dst, src, 11);
cleandst(dst);
assert(x == y && "test_tf_strlcat()");
x = ft_strlcat(dst, src, 13);
cleandst(dst);
y = strlcat(dst, src, 13);
cleandst(dst);
assert(x == y && "test_tf_strlcat()");
x = ft_strlcat(dst, src, 16);
cleandst(dst);
y = strlcat(dst, src, 16);
cleandst(dst);
// printf("16 %lu %lu\n", x, y);
assert(x == y && "test_tf_strlcat()");
cleandst(dst);
	printf("%sSuccess: %s()\n", C_GREEN, __func__);
}
