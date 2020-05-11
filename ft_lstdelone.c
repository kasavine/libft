/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 15:29:26 by isak              #+#    #+#             */
/*   Updated: 2020/04/26 20:17:56 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Takes as a parameter an element and frees the memory of the element’s
**		content using the function ’del’ given as a parameter and free the
**		element. The memory of ’next’ must not be freed.
**
**	void ft_lstdelone(t_list *lst, void (*del)(void*));
**		#1.  The element to free.
**		#2.  The address of the function used to delete the content.
**	External functs - free
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}
