/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 23:12:34 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/27 23:17:12 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

void test_ft_isalpha()
{
	int i;
	for (i = 65; i <= 90; i++)
		assert(ft_isalpha(i) != 0 && "test_ft_isalpha()");
	for (i = 97; i <= 122; i++)
		assert(ft_isalpha(i) != 0 && "test_ft_isalpha()");
}
