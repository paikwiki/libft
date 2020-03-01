/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 22:08:59 by cbaek             #+#    #+#             */
/*   Updated: 2020/03/01 23:22:38 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_strncmp()
{
	char *s1 = "Nothing gonna stop us now";
	char *s2a = "Nothing gonna";
	char *s2b = "N";

	assert(ft_strncmp(s1, s2a, 0) == strncmp(s1, s2a, 0) &&
			"test_ft_strncmp()");
	assert(ft_strncmp(s1, s2a, 13) == strncmp(s1, s2a, 13) &&
			"test_ft_strncmp()");
	assert(ft_strncmp(s1, s2a, 14) == strncmp(s1, s2a, 14) &&
			"test_ft_strncmp()");
	assert(ft_strncmp(s1, s2a, 15) == strncmp(s1, s2a, 15) &&
			"test_ft_strncmp()");
	assert(ft_strncmp(s1, s2a, 16) == strncmp(s1, s2a, 16) &&
			"test_ft_strncmp()");
	assert(ft_strncmp(s1, s2a, 17) == strncmp(s1, s2a, 17) &&
			"test_ft_strncmp()");
	assert(ft_strncmp(s1, s2b, 0) == strncmp(s1, s2b, 0) &&
			"test_ft_strncmp()");
	assert(ft_strncmp(s1, s2b, 1) == strncmp(s1, s2b, 1) &&
			"test_ft_strncmp()");
	assert(ft_strncmp(s1, s2b, 2) == strncmp(s1, s2b, 2) &&
			"test_ft_strncmp()");
	assert(ft_strncmp(s1, s2b, 3) == strncmp(s1, s2b, 3) &&
			"test_ft_strncmp()");
}
