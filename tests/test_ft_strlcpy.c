/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 15:29:07 by cbaek             #+#    #+#             */
/*   Updated: 2020/03/02 23:57:08 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void	cleandst(char *dst)
{
	int i;

	i = 0;
	while (dst[i] != 0)
		dst[i++] = 0;
}

int		getlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void	test_ft_strlcpy(void)
{
	char *dst;
	char *src = "Hello world!";
	size_t dstlen;

	dstlen = getlen((char *)src);
	dst = (char *)malloc(sizeof(char) * dstlen);
	assert(ft_strlcpy(dst, src, 4) == strlcpy(dst, src, 4) &&
			"test_ft_strlcpy()");
	cleandst(dst);
	assert(ft_strlcpy(dst, src, 0) == strlcpy(dst, src, 0) &&
			"test_ft_strlcpy()");
	cleandst(dst);
	assert(ft_strlcpy(dst, "", 4) == strlcpy(dst, "", 4) &&
			"test_ft_strlcpy()");
	cleandst(dst);
	assert(ft_strlcpy(dst, src, 42) == strlcpy(dst, src, 42) &&
			"test_ft_strlcpy()");
	free(dst);
	printf("%sSuccess: %s()\n", C_GREEN, __func__);
}
