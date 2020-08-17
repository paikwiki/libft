/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_uitoa_base.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 16:50:49 by cbaek             #+#    #+#             */
/*   Updated: 2020/08/17 17:29:22 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

/*
gcc -Wall -Wextra -Werror test_ft_uitoa_base.c ../codes/ft_uitoa_base.c && ./a.out  && \
	rm -f a.out
*/

char	*ft_uitoa_base(int n, const char *base);

int		main(void)
{
	int num1 = 0;
	int num2 = 1;
	int num3 = 543210;
	int num4 = INT_MAX;

	char *str1 = ft_uitoa_base(num1, "abcde");
	char *str2 = ft_uitoa_base(num2, "abcde");
	char *str3 = ft_uitoa_base(num3, "abcdefghij");
	char *str4 = ft_uitoa_base(num4, "0123456789abcdef");
	assert(strcmp(str1, "a") == 0);
	assert(strcmp(str2, "b") == 0);
	assert(strcmp(str3, "fedcba") == 0);
	assert(strcmp(str4, "7fffffff") == 0);

	printf("test_ft_uitoa: Successfully done.\n");
	return (0);
}
