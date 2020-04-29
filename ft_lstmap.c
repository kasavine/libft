/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 16:44:14 by isak              #+#    #+#             */
/*   Updated: 2020/04/27 14:21:25 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list_item;
	t_list	*res;

	res = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		new_list_item = ft_lstnew(f(lst->content));
		if (!new_list_item)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		if (!res)
			res = new_list_item;
		else
			ft_lstadd_back(&res, new_list_item);
		lst = lst->next;
	}
	return (res);
}
