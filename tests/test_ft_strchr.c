/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 17:50:53 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/29 11:42:51 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_strchr()
{
	char *c1 = "test";
	char *c2 = "Space space space";
	char *c3 = "";

	assert(ft_strchr(c1, 't') == strchr(c1, 't') && "test_ft_strchr()");
	assert(ft_strchr(c1, 's') == strchr(c1, 's') && "test_ft_strchr()");
	assert(ft_strchr(c2, 's') == strchr(c2, 's') && "test_ft_strchr()");
	assert(ft_strchr(c2, ' ') == strchr(c2, ' ') && "test_ft_strchr()");
	assert(ft_strchr(c2, 0) == strchr(c2, 0) && "test_ft_strchr()");
	assert(ft_strchr(c3, 'a') == strchr(c3, 'a') && "test_ft_strchr()");
	printf("%sSuccess: %s()\n", C_GREEN, __func__);
}
