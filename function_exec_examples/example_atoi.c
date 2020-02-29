/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 08:46:44 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/29 09:01:49 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("%s\t\t%d\n", "1234", atoi("1234"));
	printf("%s\t\t%d\n", "-1234", atoi("-1234"));
	printf("%s\t\t%d\n", "+1234", atoi("+1234"));
	printf("%s\t\t%d\n", "-+1234", atoi("-+1234"));
	printf("%s\t\t%d\n", "+-1234", atoi("+-1234"));
	printf("%s\t\t%d\n", "0", atoi("0"));
	printf("%s\t\t%d\n", "-0", atoi("-0"));
	printf("%s\t\t%d\n", "+0", atoi("+0"));
	printf("%s\t\t%d\n", "abc", atoi("abc"));
	printf("%s\t\t%d\n", "a", atoi("a"));
	printf("%s\t\t%d\n", " ", atoi("' '"));
	printf("%s\t\t%d\n", "1234abc", atoi("1234abc"));
	printf("%s\t%d\n", "-1234abc", atoi("-1234abc"));
	printf("%s\t%d\n", "+1234abc", atoi("+1234abc"));
	printf("%s\t\t%d\n", "abc1234", atoi("abc1234"));
	printf("%s\t%d\n", "-abc1234", atoi("-abc1234"));
	printf("%s\t%d\n", "+abc1234", atoi("+abc1234"));
	printf("%s\t%d\n", "123a45bc", atoi("123a45bc"));
	printf("%s\t%d\n", "-123a45bc", atoi("-123a45bc"));
	printf("%s\t\t%d\n", "1 234", atoi("1 234"));
	printf("%s\t\t%d\n", "-1 234", atoi("-1 234"));
	printf("%s\t\t%d\n", "+1 234", atoi("+1 234"));
	printf("%s\t\t%d\n", "12 34", atoi("12 34"));
	printf("%s\t\t%d\n", "-12 34", atoi("-12 34"));
	printf("%s\t\t%d\n", "+12 34", atoi("+12 34"));
	printf("%s\t\t%d\n", "-12+34", atoi("-12 34"));
	printf("%s\t\t%d\n", "+12-34", atoi("+12 34"));
	printf("%s\t\t%d\n", " 1234", atoi(" 1234"));
	printf("%s\t\t%d\n", " -1234", atoi(" -1234"));
	printf("%s\t\t%d\n", " +1234", atoi(" +1234"));
	printf("%s\t%d\n", " 	1234", atoi(" 1234"));
	printf("%s\t%d\n", " 	-1234", atoi(" -1234"));
	printf("%s\t%d\n", " 	+1234", atoi(" +1234"));
	return (0);
}
