/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 15:09:27 by isak              #+#    #+#             */
/*   Updated: 2020/04/23 15:55:40 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Adds the element ’new’ at the end of the list.
**
**	void ft_lstadd_back(t_list **lst, t_list *new);
**		#1.  The address of a pointer to the first link of a list.
**		#2.  The address of a pointer to the element to be added to the list.
*/

#include "libft.h"

void		ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_elem;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last_elem = ft_lstlast(*lst);
	last_elem->next = new;
}
