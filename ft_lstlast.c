/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 15:00:49 by isak              #+#    #+#             */
/*   Updated: 2020/04/23 15:24:45 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Returns the last element of the list.
**
**	t_list *ft_lstlast(t_list *lst);
**		#1.  The beginning of the list.
**
**	Return value - Last element of the list.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
