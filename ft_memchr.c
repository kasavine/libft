/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:23:59 by isak              #+#    #+#             */
/*   Updated: 2020/04/27 14:21:48 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *s_copy;
	unsigned char c_copy;

	s_copy = (unsigned char *)s;
	c_copy = (unsigned char)c;
	while (n)
	{
		if (*s_copy == c_copy)
			return (s_copy);
		s_copy++;
		n--;
	}
	return (NULL);
}
