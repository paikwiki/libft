/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 22:29:14 by cbaek             #+#    #+#             */
/*   Updated: 2020/04/12 23:31:09 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	idx;

	idx = 0;
	if (n == 0)
		return ((void *)&s[0]);
	while (idx < n)
	{
		if (((unsigned char *)s)[idx] == (unsigned char)c)
			return ((void *)&s[idx]);
		idx++;
	}
	return (0);
}
