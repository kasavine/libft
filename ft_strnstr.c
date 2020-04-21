/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 11:52:57 by isak              #+#    #+#             */
/*   Updated: 2020/04/21 16:13:20 by isak             ###   ########.fr       */
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

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	size_t	needle_len;
	size_t	j;
	size_t	i;

	h = (char *)haystack;
	needle_len = ft_strlen(needle);
	if (!(needle_len))
		return (h);
	if (ft_strlen(haystack) < needle_len || len < needle_len)
		return (NULL);
	i = 0;
	while (h[i] && i <= len - needle_len)
	{
		j = 0;
		while (needle[j] && needle[j] == h[i + j])
			j++;
		if (j == needle_len)
			return (&h[i]);
		i++;
	}
	return (NULL);
}
