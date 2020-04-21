/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:23:35 by isak              #+#    #+#             */
/*   Updated: 2020/04/21 11:08:17 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	memccpy -- copy string until character found
**
**	The memccpy() function copies bytes from string src to string dst.  If
**		the character c (as converted to an unsigned char) occurs in the
**		string src, the copy stops and a pointer to the byte after the copy
**		of c in the string dst is returned.  Otherwise, n bytes are copied,
**		and a NULL pointer is returned.
*/

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *dst_copy;
	unsigned char *src_copy;

	if (src == NULL && dst == NULL && n > 0)
		return (dst);
	dst_copy = (unsigned char *)dst;
	src_copy = (unsigned char *)src;
	while (n--)
	{
		*dst_copy++ = *src_copy;
		if (*src_copy++ == (unsigned char)c)
			return (dst_copy);
	}
	return (0);
}
