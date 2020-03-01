/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 22:13:45 by cbaek             #+#    #+#             */
/*   Updated: 2020/03/01 22:56:44 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0;
	char *s1 = "Nothing gonna stop us now";
	char *s2a = "Nothing gonna";
	char *s2b = "N";

	printf("s1:%s s2a:%s \033[33mlen:%d\t\033[32m%d\033[0m\n", s1, s2a, 0,
			strncmp(s1, s2a, 0));
	for (i = 13; i < 17; i++)
		printf("s1:%s s2a:%s \033[33mlen:%d\t\033[32m%d\033[0m\n", s1, s2a, i,
				strncmp(s1, s2a, i));
	for (i = 0; i < 3; i++)
		printf("s1:%s s2b:%s \033[33mlen:%d\t\033[32m%d\033[0m\n", s1, s2b, i,
				strncmp(s1, s2b, i));
}
