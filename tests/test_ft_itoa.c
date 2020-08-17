/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 15:40:31 by cbaek             #+#    #+#             */
/*   Updated: 2020/08/17 17:32:24 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

/*
gcc -Wall -Wextra -Werror test_ft_itoa.c ../codes/ft_itoa.c && ./a.out  && \
	rm -f a.out
*/

char	*ft_itoa(int n);

int		main(void)
{
	int num1 = 0;
	int num2 = -1;
	int num3 = 1;
	int num4 = 123456;
	int num5 = -123456;
	int num6 = INT_MAX;
	int num7 = INT_MIN;

	char *str1 = ft_itoa(num1);
	char *str2 = ft_itoa(num2);
	char *str3 = ft_itoa(num3);
	char *str4 = ft_itoa(num4);
	char *str5 = ft_itoa(num5);
	char *str6 = ft_itoa(num6);
	char *str7 = ft_itoa(num7);

	assert(strcmp(str1, "0") == 0);
	assert(strcmp(str2, "-1") == 0);
	assert(strcmp(str3, "1") == 0);
	assert(strcmp(str4, "123456") == 0);
	assert(strcmp(str5, "-123456") == 0);
	assert(strcmp(str6, "2147483647") == 0);
	assert(strcmp(str7, "-2147483648") == 0);

	printf("test_ft_itoa: Successfully done.\n");
	return (0);
}
