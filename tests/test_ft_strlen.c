/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 16:00:10 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/28 17:30:47 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_strlen()
{
	assert(ft_strlen("test") == strlen("test") && "test_ft_strlen()");
	assert(ft_strlen("t est") == strlen("t est") && "test_ft_strlen()");
	assert(ft_strlen(" test") == strlen(" test") && "test_ft_strlen()");
	assert(ft_strlen("test ") == strlen("test ") && "test_ft_strlen()");
	assert(ft_strlen(" ") == strlen(" ") && "test_ft_strlen()");
	assert(ft_strlen("") == strlen("") && "test_ft_strlen()");
	printf("%sSuccess: %s()\n", C_GREEN, __func__);
}
