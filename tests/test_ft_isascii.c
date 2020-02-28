/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 10:52:17 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/28 13:42:17 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_isascii()
{
	int i;

	for (i = 0; i <= 127; i++)
		assert(ft_isascii(i) != 0 && "test_ft_isascii()");

	for (i = -1; i >= -10; i--)
		assert(ft_isascii(i) == 0 && "test_ft_isascii()");

	for (i = 128; i <= 255; i++)
		assert(ft_isascii(i) == 0 && "test_ft_isascii()");
	printf("%sSuccess: test_ft_isascii()\n", C_GREEN);
}
