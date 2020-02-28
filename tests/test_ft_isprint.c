/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 13:06:42 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/28 13:21:28 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_isprint()
{
	int i;

	for (i = -10; i <= 137; i++)
	{
		if (i >= 32 && i <= 126)
			assert(ft_isprint(i) != 0 && "test_ft_isprint()");
		else
			assert(ft_isprint(i) == 0 && "test_ft_isprint()");
	}
	printf("Success: test_ft_isprint()\n");
}
