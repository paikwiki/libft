/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 21:04:59 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/29 21:53:34 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("%s\n", strnstr("Foo Bar Baz", "Bar", 4));
	printf("%s\n", strnstr("Foo Bar Baz", "Bar", 6));
	printf("%s\n", strnstr("Foo Bar Baz", "Bar", 7));
	printf("%s\n", strnstr("Foo Bar Baz", "Bar", 13));
	printf("%s\n", strnstr("Foo Bar Bar Baz", "Bar", 4));
	printf("%s\n", strnstr("Foo Bar Bar Baz", "Bar", 7));
	printf("%s\n", strnstr("Foo Bar Bar Baz", "Bar", 15));
	printf("%s\n", strnstr("Foo Bar Baz", "o Ba", 11));
	printf("%s\n", strnstr("", "Bar", 6));
	printf("%s\n", strnstr("Foo", "", 6));
	printf("%s\n", strnstr("Foo", " ", 6));
	printf("%s\n", strnstr("Foo Bar", " ", 6));
	printf("%s\n", strnstr("Foo Bar", " ", 0));
	printf("%s\n", strnstr("Foo Bar Bar Baz", "Bar", -1));
	printf("%s\n", strnstr("Foo Bar Baz", "Bar", -1));
	printf("%s\n", strnstr("Foo Bar Baz", "Fo", 1));
	printf("%s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
}
