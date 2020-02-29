/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 11:52:40 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/29 11:57:57 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_strrchr()
{
	char *c1 = "test";
	char *c2 = "Space space space";
	char *c3 = "";

	assert(ft_strrchr(c1, 't') == strrchr(c1, 't') && "test_ft_strrchr()");
	assert(ft_strrchr(c1, 's') == strrchr(c1, 's') && "test_ft_strrchr()");
	assert(ft_strrchr(c2, 's') == strrchr(c2, 's') && "test_ft_strrchr()");
	assert(ft_strrchr(c2, ' ') == strrchr(c2, ' ') && "test_ft_strrchr()");
	assert(ft_strrchr(c2, 0) == strrchr(c2, 0) && "test_ft_strrchr()");
	assert(ft_strrchr(c3, 'a') == strrchr(c3, 'a') && "test_ft_strrchr()");
	printf("%sSuccess: %s()\n", C_GREEN, __func__);
}
