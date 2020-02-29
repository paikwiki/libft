/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 11:58:31 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/29 12:02:24 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	if (s == 0)
		return 0;
	i = 0;
	while (s[i] != 0)
		i++;
	if (c == 0)
		return ((char *)&s[i]);
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
