/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 23:12:34 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/28 17:30:22 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_isalpha()
{
	int i;

	for (i = 'A'; i <= 'Z'; i++) // lower characters 65~90
		assert(ft_isalpha(i) != 0 && "test_ft_isalpha()");
	for (i = 'a'; i <= 'z'; i++) // upper characters 97~122
		assert(ft_isalpha(i) != 0 && "test_ft_isalpha()");
	for (i = 0; i <= 47; i++) // before lower characters without digits Pt.1
		assert(ft_isalpha(i) == 0 && "test_ft_isalpha()");
	for (i = '0'; i <= '9'; i++) // digit characters 48~57
		assert(ft_isalpha(i) == 0 && "test_ft_isalpha()");
	for (i = 58; i <= 64; i++) // before lower characters without digits Pt.2
		assert(ft_isalpha(i) == 0 && "test_ft_isalpha()");
	for (i = 91; i <= 96; i++) // between lowers and uppers;
		assert(ft_isalpha(i) == 0 && "test_ft_isalpha()");
	for (i = 123; i <= 127; i++) // after uppers
		assert(ft_isalpha(i) == 0 && "test_ft_isalpha()");
	printf("%sSuccess: %s()\n", C_GREEN, __func__);
}
