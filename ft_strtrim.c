/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 15:13:49 by cbaek             #+#    #+#             */
/*   Updated: 2020/03/05 16:27:21 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ismatch(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != 0)
		if (set[i++] == c)
			return (1);
	return (0);
}

static void	setzero(size_t *i, size_t *len)
{
	*i = 0;
	*len = 0;
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*tstr;
	size_t	i;
	size_t	len;

	if (!s1 || !set)
		return (0);
	setzero(&i, &len);
	while (s1[i] != 0)
	{
		if (!ismatch(s1[i], set))
			len++;
		i++;
	}
	if((tstr = (char *)malloc(sizeof(char) * (len + 1))) == 0)
		return (0);
	setzero(&i, &len);
	while (s1[i] != 0)
	{
		if (!ismatch(s1[i], set))
			tstr[len++] = s1[i];
		i++;
	}
	tstr[len] = 0;
	return (tstr);
}
