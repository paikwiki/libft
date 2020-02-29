/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 08:45:24 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/29 11:23:10 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_atoi()
{
	assert((ft_atoi("1234") == atoi("1234")) && "test_ft_atoi()");
	assert((ft_atoi("-1234") == atoi("-1234")) && "test_ft_atoi()");
	assert((ft_atoi("+1234") == atoi("+1234")) && "test_ft_atoi()");
	assert((ft_atoi("-+1234") == atoi("-+1234")) && "test_ft_atoi()");
	assert((ft_atoi("+-1234") == atoi("+-1234")) && "test_ft_atoi()");
	assert((ft_atoi("0") == atoi("0")) && "test_ft_atoi()");
	assert((ft_atoi("-0") == atoi("-0")) && "test_ft_atoi()");
	assert((ft_atoi("+0") == atoi("+0")) && "test_ft_atoi()");
	assert((ft_atoi("abc") == atoi("abc")) && "test_ft_atoi()");
	assert((ft_atoi("a") == atoi("a")) && "test_ft_atoi()");
	assert((ft_atoi(" ") == atoi(" ")) && "test_ft_atoi()");
	assert((ft_atoi("1234abc") == atoi("1234abc")) && "test_ft_atoi()");
	assert((ft_atoi("-1234abc") == atoi("-1234abc")) && "test_ft_atoi()");
	assert((ft_atoi("+1234abc") == atoi("+1234abc")) && "test_ft_atoi()");
	assert((ft_atoi("abc1234") == atoi("abc1234")) && "test_ft_atoi()");
	assert((ft_atoi("-abc1234") == atoi("-abc1234")) && "test_ft_atoi()");
	assert((ft_atoi("+abc1234") == atoi("+abc1234")) && "test_ft_atoi()");
	assert((ft_atoi("123a45bc") == atoi("123a45bc")) && "test_ft_atoi()");
	assert((ft_atoi("-123a45bc") == atoi("-123a45bc")) && "test_ft_atoi()");
	assert((ft_atoi("1 234") == atoi("1 234")) && "test_ft_atoi()");
	assert((ft_atoi("-1 234") == atoi("-1 234")) && "test_ft_atoi()");
	assert((ft_atoi("+1 234") == atoi("+1 234")) && "test_ft_atoi()");
	assert((ft_atoi("12 34") == atoi("12 34")) && "test_ft_atoi()");
	assert((ft_atoi("-12 34") == atoi("-12 34")) && "test_ft_atoi()");
	assert((ft_atoi("+12 34") == atoi("+12 34")) && "test_ft_atoi()");
	assert((ft_atoi("-12 34") == atoi("-12 34")) && "test_ft_atoi()");
	assert((ft_atoi("+12 34") == atoi("+12 34")) && "test_ft_atoi()");
	assert((ft_atoi(" 1234") == atoi(" 1234")) && "test_ft_atoi()");
	assert((ft_atoi(" -1234") == atoi(" -1234")) && "test_ft_atoi()");
	assert((ft_atoi(" +1234") == atoi(" +1234")) && "test_ft_atoi()");
	assert((ft_atoi(" 1234") == atoi(" 1234")) && "test_ft_atoi()");
	assert((ft_atoi(" -1234") == atoi(" -1234")) && "test_ft_atoi()");
	assert((ft_atoi(" +1234") == atoi(" +1234")) && "test_ft_atoi()");
	printf("%sSuccess: %s()\n", C_GREEN, __func__);
}
