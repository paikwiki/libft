/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 21:39:59 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/29 23:13:57 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

static int	ft_ismatch(const char *haystack, const char *needle, int i, int len)
{
	int j;

	j = i;
	while (needle[j-i] != 0 && --len > 0)
	{
		if (haystack[j] == needle[j - i])
			j++;
		else
			return (0);
	}
	return (1);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;

	i = 0;
	if (needle[i] == 0)
		return (char *)&haystack[i];
	if (len-- == 1 && haystack[i] == needle[i])
		return (char *)&haystack[i];
	while (haystack[i] != 0 && --len > 0)
	{
		if (haystack[i] == needle[0])
			if(ft_ismatch(haystack, needle, i, len))
				return (char *)&haystack[i];
		i++;
	}
	return (0);
}
