/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:06:28 by isak              #+#    #+#             */
/*   Updated: 2020/04/23 10:53:39 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
**		specified in ’set’ removed from the beginning and the end of the string.
**
**	char *ft_strtrim(char const *s1, char const *set);
**		#1.  The string to be trimmed.
**		#2.  The reference set of characters to trim.
**
**	Return value - The trimmed string.  NULL if the allocation fails.
*/

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	char		*fresh_trimmed;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end && ft_strchr(set, s1[end - 1]))
		end--;
	if (end < start)
		return ("");
	fresh_trimmed = (char *)malloc(sizeof(char) * ((end - start) + 1));
	if (!fresh_trimmed)
		return (NULL);
	fresh_trimmed = ft_strncpy(fresh_trimmed, s1 + start, end - start);
	fresh_trimmed[end - start] = '\0';
	return (fresh_trimmed);
}
