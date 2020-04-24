/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 11:52:57 by isak              #+#    #+#             */
/*   Updated: 2020/04/23 20:05:47 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	strnstr -- locate a substring in a string
**
**	The strnstr() function locates the first occurrence of the null-termi-
**		nated string needle in the string haystack, where not more than len
**		characters are searched.  Characters that appear after a `\0' character
**		are not searched.
**
**	If needle is an empty string, haystack is returned; if needle occurs
**		nowhere in haystack, NULL is returned; otherwise a pointer to the first
**		character of the first occurrence of needle is returned.
*/

#include "libft.h"

char		*ft_strnstr(const char *h, const char *n, size_t len)
{
	char	*h_new;
	size_t	needle_len;
	size_t	j;
	size_t	i;

	h_new = (char *)h;
	needle_len = ft_strlen(n);
	if (!(needle_len))
		return (h_new);
	if (ft_strlen(h) < needle_len || len < needle_len)
		return (NULL);
	i = 0;
	while (h_new[i] && i <= len - needle_len)
	{
		j = 0;
		while (n[j] && n[j] == h_new[i + j])
			j++;
		if (j == needle_len)
			return (&h_new[i]);
		i++;
	}
	return (NULL);
}
