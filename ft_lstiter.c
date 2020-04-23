/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 16:33:12 by isak              #+#    #+#             */
/*   Updated: 2020/04/23 16:43:11 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Iterates the list ’lst’ and applies the function ’f’ to the content
**		of each element.
**
**	void ft_lstiter(t_list *lst, void (*f)(void *));
**		#1.  The adress of a pointer to an element.
**		#2.  The adress of the function used to iterate on the list.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
