/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:39:52 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/28 13:42:42 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_isalnum()
{
	int i;

	for (i = -10; i <= 137; i++)
	{
		if (isdigit(i) || isalpha(i))
			assert(ft_isalnum(i) != 0 && "test_ft_isalnum()");
		else
			assert(ft_isalnum(i) == 0 && "test_ft_isalnum()");
	}
	printf("%sSuccess: test_ft_isalnum()\n", C_GREEN);
}