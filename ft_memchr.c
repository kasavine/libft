/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:23:59 by isak              #+#    #+#             */
/*   Updated: 2020/04/26 20:19:28 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	memchr -- locate byte in byte string
**
**	The memchr() function locates the first occurrence of c (converted to an
**		unsigned char) in string s.
**
**	The memchr() function returns a pointer to the byte located, or NULL if
**		no such byte exists within n bytes.
*/

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void*)(s + i));
		i++;
	}
	return (NULL);
}
