/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 14:33:02 by isak              #+#    #+#             */
/*   Updated: 2020/04/23 14:59:20 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates (with malloc(3)) and returns a new element.  The variable
**		'content’ is initialized with the value of the parameter ’content’.
**		The variable ’next’ is initialized to NULL.
**
**	t_list *ft_lstnew(void *content);
**		#1.  The content to create the new element with.
**
**	Return value - The new element.
**
**	External functs - malloc
*/

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*new_elem;

	new_elem = (t_list *)malloc(sizeof(t_list));
	if(!new_elem)
		return(NULL);
	new_elem->content = content;
	new_elem->next = NULL;
	return(new_elem);
}
