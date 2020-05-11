/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 11:18:50 by isak              #+#    #+#             */
/*   Updated: 2020/04/26 20:21:56 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	strlcat -- size-bounded string copying and concatenation
*/

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		len;
	int		src_len;

	len = 0;
	src_len = ft_strlen(src);
	while (*dst && dstsize > 0)
	{
		dst++;
		len++;
		dstsize--;
	}
	while (*src && dstsize > 1)
	{
		*dst++ = *src++;
		dstsize--;
	}
	if (dstsize == 1 || *src == 0)
		*dst = '\0';
	return ((unsigned long)(src_len + len));
}
