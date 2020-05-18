/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:24:18 by isak              #+#    #+#             */
/*   Updated: 2020/04/27 14:21:55 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;

	s1_copy = (unsigned char *)s1;
	s2_copy = (unsigned char *)s2;
	if (s1_copy == s2_copy || n == 0)
		return (0);
	while (n)
	{
		if (*s1_copy != *s2_copy)
			return (*s1_copy - *s2_copy);
		s1_copy++;
		s2_copy++;
		n--;
	}
	return (0);
}
