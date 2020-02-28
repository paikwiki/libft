/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_tolower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 17:17:47 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/28 17:30:43 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_tolower()
{
	int i;

	for (i = 0; i <= 127; i++)
	{
		assert(ft_tolower(i) == tolower(i) && "test_ft_tolower()");
	}
	printf("%sSuccess: %s()\n", C_GREEN, __func__);
}
