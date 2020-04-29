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

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (src == NULL && dst == NULL && n > 0)
		return (dst);
	while (n > 0)
	{
		n--;
		((char *)dst)[n] = ((char *)src)[n];
	}
	return (dst);
}
