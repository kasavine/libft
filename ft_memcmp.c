/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:24:18 by isak              #+#    #+#             */
/*   Updated: 2020/04/21 14:09:39 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	memcmp -- compare byte string
**
**	The memcmp() function compares byte string s1 against byte string s2.
**		Both strings are assumed to be n bytes long.
**	The memcmp() function returns zero if the two strings are identical, oth-
**		erwise returns the difference between the first two differing bytes
**		(treated as unsigned char values, so that `\200' is greater than `\0',
**		for example).  Zero-length strings are always identical.
*/

#include "libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
