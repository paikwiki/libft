/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 22:14:38 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/29 10:54:08 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int main(void)
{
	test_ft_isdigit();
	test_ft_isalpha();
	test_ft_isascii();
	test_ft_isalnum();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strchr();
	test_ft_atoi();
	return (0);
}
