/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 22:01:25 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/28 10:12:12 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_isdigit() {
	int i;

	for (i = '0'; i <= '9'; i++) // digit characters 48~57
		assert(ft_isdigit(i) != 0 && "test_ft_isdigit()");
	for (i = 'A'; i <= 'Z'; i++) // lower characters 65~90
		assert(ft_isdigit(i) == 0 && "test_ft_isdigit()");
	for (i = 'a'; i <= 'z'; i++) // upper characters 97~122
		assert(ft_isdigit(i) == 0 && "test_ft_isdigit()");
	for (i = 0; i <= 47; i++) // before lower characters without digits Pt.1
		assert(ft_isdigit(i) == 0 && "test_ft_isdigit()");
	for (i = 58; i <= 64; i++) // before lower characters without digits Pt.2
		assert(ft_isdigit(i) == 0 && "test_ft_isdigit()");
	for (i = 91; i <= 96; i++) // between lowers and uppers;
		assert(ft_isdigit(i) == 0 && "test_ft_isdigit()");
	for (i = 123; i <= 127; i++) // after uppers
		assert(ft_isdigit(i) == 0 && "test_ft_isdigit()");
}
