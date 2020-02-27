/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 22:01:25 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/27 22:34:32 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_isdigit() {
	assert(ft_isdigit('0') != 0 && "test_ft_isdigit()");
	assert(ft_isdigit('1') != 0 && "test_ft_isdigit()");
	assert(ft_isdigit('2') != 0 && "test_ft_isdigit()");
	assert(ft_isdigit('3') != 0 && "test_ft_isdigit()");
	assert(ft_isdigit('4') != 0 && "test_ft_isdigit()");
	assert(ft_isdigit('5') != 0 && "test_ft_isdigit()");
	assert(ft_isdigit('6') != 0 && "test_ft_isdigit()");
	assert(ft_isdigit('7') != 0 && "test_ft_isdigit()");
	assert(ft_isdigit('8') != 0 && "test_ft_isdigit()");
	assert(ft_isdigit('9') != 0 && "test_ft_isdigit()");
}
