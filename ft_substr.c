/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:07:19 by isak              #+#    #+#             */
/*   Updated: 2020/04/23 13:44:03 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates (with malloc(3)) and returns a substring from the string ’s’.
**	The substring begins at index ’start’ and is of maximum size ’len’.
**
**	char *ft_substr(char const *s, unsigned int start, size_t len);
**		#1.  The string from which to create the substring.
**		#2.  The start index of the substring in the string ’s’.
**		#3.  The maximum length of the substring.
**
**	Return value - The substring.  NULL if the allocation fails.
**
**	External functs - malloc
*/

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*fresh_new;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	fresh_new = (char *)malloc((len + 1) * sizeof(char));
	if (fresh_new == NULL)
		return (NULL);
	while (i < len)
	{
		fresh_new[i] = s[start + i];
		i++;
	}
	fresh_new[i] = '\0';
	return (fresh_new);
}
