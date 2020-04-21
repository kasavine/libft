/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:37:30 by isak              #+#    #+#             */
/*   Updated: 2020/04/21 15:07:28 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	strchr -- locate character in string
**
**	The strchr() function locates the first occurrence of c (converted to a
**		char) in the string pointed to by s.  The terminating null character is
**		considered to be part of the string; therefore if c is `\0', the func-
**		tions locate the terminating `\0'.
**
**	The function strchr() return a pointer to the located
**		character, or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}
