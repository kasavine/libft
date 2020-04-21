/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 14:20:27 by isak              #+#    #+#             */
/*   Updated: 2020/04/21 15:06:08 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	calloc -- memory allocation
**
**	The calloc() function contiguously allocates enough space for count
**		objects that are size bytes of memory each and returns a pointer to the
**		allocated memory.  The allocated memory is filled with bytes of value
**		zero.
*/

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	size_t	res_size;
	void	*p;

	res_size = size * count;
	if (!(p = malloc(res_size)))
		return (NULL);
	ft_memset(p, 0, res_size);
	return (p);
}
