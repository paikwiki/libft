/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 00:38:45 by cbaek             #+#    #+#             */
/*   Updated: 2020/03/09 14:32:18 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*temp_res;

	if (!lst || ((result = (t_list *)malloc(sizeof(t_list))) == 0))
		return (0);
	result->content = (*f)(lst->content);
	result->next = 0;
	temp_res = result;
	lst = lst->next;
	while (lst != 0)
	{
		if ((temp_res->next = (t_list *)malloc(sizeof(t_list))) == 0)
		{
			ft_lstclear(&result, del);
			return (0);
		}
		(temp_res->next)->content = (*f)(lst->content);
		(temp_res->next)->next = 0;
		temp_res = temp_res->next;
		lst = lst->next;
	}
	return (result);
}
