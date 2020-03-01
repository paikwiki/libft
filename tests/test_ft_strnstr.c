/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 21:32:49 by cbaek             #+#    #+#             */
/*   Updated: 2020/03/01 12:17:55 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_strnstr()
{
	char *c1 = "Foo Bar Baz";
	char *c2 = "Foo Bar Bar Baz";

	assert(ft_strnstr(c1, "F", 1) == strnstr(c1, "F", 1) && "ft_strnstr()");
	assert(ft_strnstr(c1, "Fo", 1) == strnstr(c1, "Fo", 1) && "ft_strnstr()");
	assert(ft_strnstr(c1, "Foo", 1) == strnstr(c1, "Foo", 1) && "ft_strnstr()");
	assert(ft_strnstr(c1, "Bar", 4) == strnstr(c1, "Bar", 4) && "ft_strnstr()");
	assert(ft_strnstr(c1, "Bar", 6) == strnstr(c1, "Bar", 6) && "ft_strnstr()");
	assert(ft_strnstr(c1, "Bar", 7) == strnstr(c1, "Bar", 7) && "ft_strnstr()");
	assert(ft_strnstr(c1, "Bar", 13) == strnstr(c1, "Bar", 13) &&
			"ft_strnstr()");
	assert(ft_strnstr(c2, "Bar", 4) == strnstr(c2, "Bar", 4) && "ft_strnstr()");
	assert(ft_strnstr(c2, "Bar", 7) == strnstr(c2, "Bar", 7) && "ft_strnstr()");
	assert(ft_strnstr(c2, "Bar", 15) == strnstr(c2, "Bar", 15) &&
			"ft_strnstr()");
	assert(ft_strnstr(c1, "o Ba", 11) == strnstr(c1, "o Ba", 11) &&
			"ft_strnstr()");
	assert(ft_strnstr("", "Bar", 6) == strnstr("", "Bar", 6) && "ft_strnstr()");
	assert(ft_strnstr("Foo", "", 6) == strnstr("Foo", "", 6) && "ft_strnstr()");
	assert(ft_strnstr("Foo", " ", 6) == strnstr("Foo", " ", 6) &&
			"ft_strnstr()");
	assert(ft_strnstr("Foo Bar", " ", 6) == strnstr("Foo Bar", " ", 6) &&
			"ft_strnstr()");
	assert(ft_strnstr(c2, "Bar", -1) == strnstr(c2, "Bar", -1) &&
			"ft_strnstr()");
	assert(ft_strnstr(c1, "Bar", -1) == strnstr(c1, "Bar", -1) &&
			"ft_strnstr()");
	assert(ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15) ==
			strnstr("lorem ipsum dolor sit amet", "dolor", 15) &&
			"ft_strnstr()");
	printf("%sSuccess: %s()\n", C_GREEN, __func__);
}
