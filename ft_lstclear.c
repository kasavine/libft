/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 15:57:30 by isak              #+#    #+#             */
/*   Updated: 2020/04/23 16:31:57 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Deletes and frees the given element and every successor of that element,
**		using the function ’del’ and free(3). Finally, the pointer to the list
**		must be set to NULL.
**
**	void ft_lstclear(t_list **lst, void (*del)(void*));
**		#1.  The adress of a pointer to an element.
**		#2.  The adress of the func used to delete the content of the element.
**
**	External functs - free
*/

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (*lst == NULL)
		return ;
	while(*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
