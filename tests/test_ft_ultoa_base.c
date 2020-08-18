/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_ultoa_base.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 18:46:37 by cbaek             #+#    #+#             */
/*   Updated: 2020/08/18 18:58:19 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

/*
gcc -Wall -Wextra -Werror test_ft_ultoa_base.c ../codes/ft_ultoa_base.c && ./a.out  && \
	rm -f a.out
*/

char	*ft_ultoa_base(unsigned long n, const char *base);

int		main(void)
{
	unsigned long num1 = 0;
	unsigned long num2 = 1;
	unsigned long num3 = 543210;
	unsigned long num4 = 4294967295;
	printf("address: %p\n", &num1);
	printf("converted: %s\n", ft_ultoa_base((unsigned long)&num1, "0123456789abcdef"));
	printf("address: %p\n", &num2);
	printf("converted: %s\n", ft_ultoa_base((unsigned long)&num2, "0123456789abcdef"));
	printf("address: %p\n", &num3);
	printf("converted: %s\n", ft_ultoa_base((unsigned long)&num3, "0123456789abcdef"));
	printf("address: %p\n", &num4);
	printf("converted: %s\n", ft_ultoa_base((unsigned long)&num4, "0123456789abcdef"));

	printf("test_ft_uitoa: Check results manually!\n");
	return (0);
}
