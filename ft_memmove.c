/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:24:44 by isak              #+#    #+#             */
/*   Updated: 2020/04/27 14:22:05 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*src_copy;
	unsigned char	*dst_copy;

	if (src == NULL && dst == NULL)
		return (NULL);
	src_copy = (unsigned char *)src;
	dst_copy = (unsigned char *)dst;
	i = 0;
	if (src_copy > dst_copy)
	{
		while (i < len)
		{
			(dst_copy)[i] = (src_copy)[i];
			i++;
		}
		return (dst);
	}
	else
	{
		while (len-- > 0)
			(dst_copy)[len] = (src_copy)[len];
		return (dst);
	}
}
