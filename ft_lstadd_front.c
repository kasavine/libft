/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 14:42:07 by isak              #+#    #+#             */
/*   Updated: 2020/04/23 15:24:47 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Adds the element ’new’ at the beginning of the list.
**
**	void ft_lstadd_front(t_list **lst, t_list *new);
**		#1.  The address of a pointer to the first link of a list.
**		#2.  The address of a pointer to the element to be added to the list.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	if (lst == NULL)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
