/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:24:31 by isak              #+#    #+#             */
/*   Updated: 2020/04/27 14:22:00 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_copy;
	unsigned char	*src_copy;

	dst_copy = (unsigned char *)dst;
	src_copy = (unsigned char *)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (n > 0)
	{
		n--;
		(dst_copy)[n] = (src_copy)[n];
	}
	return (dst);
}
