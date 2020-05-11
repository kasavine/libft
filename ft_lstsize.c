/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 14:53:28 by isak              #+#    #+#             */
/*   Updated: 2020/04/26 20:18:50 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Counts the number of elements in a list.
**
**	int ft_lstsize(t_list *lst);
**		#1.  The beginning of the list.
**
**	Return value - Length of the list.
*/

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int	count_elem;

	count_elem = 0;
	while (lst)
	{
		lst = lst->next;
		count_elem++;
	}
	return (count_elem);
}
