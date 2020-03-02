/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 21:21:00 by cbaek             #+#    #+#             */
/*   Updated: 2020/03/02 23:13:40 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

void cleandst(char *str)
{
	int i;

	i = 6;
	while (i < 16)
		str[i++] = 0;
}

int main(void)
{
	char dst[16] = "Hello-";
	char src[] = "World!";

	printf("0  \033[33m%lu\t\033[32m%s\033[0m\n", strlcat(dst, src, 0), dst);
	cleandst(dst);
	printf("2  \033[33m%lu\t\033[32m%s\033[0m\n", strlcat(dst, src, 2), dst);
	cleandst(dst);
	printf("6  \033[33m%lu\t\033[32m%s\033[0m\n", strlcat(dst, src, 6), dst);
	cleandst(dst);
	printf("7  \033[33m%lu\t\033[32m%s\033[0m\n", strlcat(dst, src, 7), dst);
	cleandst(dst);
	printf("11 \033[33m%lu\t\033[32m%s\033[0m\n", strlcat(dst, src, 11), dst);
	cleandst(dst);
	printf("13 \033[33m%lu\t\033[32m%s\033[0m\n", strlcat(dst, src, 13), dst);
	cleandst(dst);
	printf("16 \033[33m%lu\t\033[32m%s\033[0m\n", strlcat(dst, src, 16), dst);
	cleandst(dst);
	printf("16 \033[33m%lu\t\033[32m%s\033[0m\n", strlcat(dst, "", 10), dst);
	return (0);
}
