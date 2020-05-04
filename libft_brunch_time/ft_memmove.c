/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:24:44 by isak              #+#    #+#             */
/*   Updated: 2020/03/02 10:24:46 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (src == NULL && dst == NULL && len > 0)
		return (dst);
	if (src + len > dst && src + len < dst + len)
	{
		while (len > 0)
		{
			len--;
			((char *)dst)[len] = ((char *)src)[len];
		}
		return (dst);
	}
	i = 0;
	while (i < len)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}
