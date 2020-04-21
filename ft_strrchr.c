/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 11:01:15 by isak              #+#    #+#             */
/*   Updated: 2020/04/21 15:07:45 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	strrchr -- locates character in string
**
**	The strrchr() function is identical to strchr(), except it locates the
**		last occurrence of c.
**
**	The function strrchr() return a pointer to the located
**		character, or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
