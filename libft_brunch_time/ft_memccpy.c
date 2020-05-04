/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:23:35 by isak              #+#    #+#             */
/*   Updated: 2020/03/02 10:33:37 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *dst_copy;
	unsigned char *src_copy;

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
