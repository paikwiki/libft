/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chPaik <chPaik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 14:28:53 by cbaek             #+#    #+#             */
/*   Updated: 2020/03/06 20:57:05 by chPaik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	cnt;
	size_t	strlen;

	i = 0;
	cnt = 0;
	while(s[i] == c)
		i++;
	while (s[i] != 0)
	{
		if((s[i - 1] != c && s[i] == c) || (s[i + 1] == 0 && s[i] != c))
			cnt++;
		i++;
	}
	strs = (char **)malloc(sizeof(char *) * (cnt + 1));
	strs[cnt] = 0;
	i = 0;
	cnt = 0;
	strlen = 0;
	while(s[i] == c)
		i++;
	while (s[i] != 0)
	{
		if((s[i - 1] != c && s[i] == c) || (s[i + 1] == 0 && s[i] != c))
		{
			strs[cnt++] = (char *)malloc(sizeof(char) * (strlen + 1));
			strlen = 0;
		}
		else
			if (s[i] != c)
				strlen++;
		i++;
	}
	i = 0;
	cnt = 0;
	while(s[i] == c)
		i++;
	while (s[i] != 0)
	{
		if(s[i - 1] != c && s[i] == c)
		{
			strs[cnt++][strlen + 1] = 0;
			strlen = 0;
		}
		else if(s[i + 1] == 0 && s[i] != c)
		{
			strs[cnt][strlen] = s[i];
			strs[cnt][strlen + 1] = 0;
		}
		else
			if ((s[i] != c) && (s[i + 1] != 0))
				strs[cnt][strlen++] = s[i];
		i++;
	}
	return (strs);
}
