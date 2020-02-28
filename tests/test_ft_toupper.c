/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_toupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 17:04:13 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/28 17:31:02 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_toupper()
{
	int i;

	for (i = 0; i <= 127; i++)
		assert(ft_toupper(i) == toupper(i) && "test_ft_toupper()");
	printf("%sSuccess: %s()\n", C_GREEN, __func__);
}
