/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 13:51:24 by cbaek             #+#    #+#             */
/*   Updated: 2020/03/03 13:50:29 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int		main(void)
{
	char *dst;
	char *src = "123456";
	size_t dstlen;
	size_t ret;

	dstlen = getlen(src);
	dst = (char *)malloc(sizeof(char) * (dstlen));
	ret = strlcpy(dst, src, 4);
	printf("%zu\t:%s:\n", ret, dst);
	cleandst(dst);
	ret = strlcpy(dst, src, 0);
	printf("%zu\t:%s:\n", ret, dst);
	cleandst(dst);
	ret = strlcpy(dst, "", 0);
	printf("%zu\t:%s:\n", ret, dst);
	cleandst(dst);
	ret = strlcpy("", src, 0);
	printf("%zu\t:%s:\n", ret, dst);
	cleandst(dst);
	ret = strlcpy(dst, src, 42);
	printf("%zu\t:%s:\n", ret, dst);
	return (0);
}
