/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:24:55 by isak              #+#    #+#             */
/*   Updated: 2020/04/21 10:14:13 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**		The memset() function writes len bytes of value c (converted to an
**			unsigned char) to the string b.
**		The memset() function returns its first argument.
*/

#include "libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
