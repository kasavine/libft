/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 11:21:39 by isak              #+#    #+#             */
/*   Updated: 2020/04/21 15:51:19 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	strncmp -- compare strings
**
**	The strncmp() function lexicographically compare the nullterminated
**		strings s1 and s2.
**
**	The strncmp() function compares not more than n characters.  Because
**		strncmp() is designed for comparing strings rather than binary data,
**		characters that appear after a `\0' character are not compared.
**
**	The and strncmp() function return an integer greater than,
**		equal to, or less than 0, according as the string s1 is greater than,
**		equal to, or less than the string s2.
*/

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && n > 0)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
		n--;
	}
	if (s2[i] != '\0' && n > 0)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
