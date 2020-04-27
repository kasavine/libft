/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:06:47 by isak              #+#    #+#             */
/*   Updated: 2020/04/26 20:21:53 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates (with malloc(3)) and returns a new string, which is the result
**		of the concatenation of ’s1’ and ’s2’.
**
**	char *ft_strjoin(char const *s1, char const *s2);
**		#1.  The prefix string.
**		#2.  The suffix string.
**
**	Return value - The new string.  NULL if the allocation fails.
**
**	External functs - malloc
*/

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh_new;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	fresh_new = (char *)malloc((len + 1) * sizeof(char));
	if (fresh_new == NULL)
		return (NULL);
	ft_strcpy(fresh_new, s1);
	ft_strcat(fresh_new, s2);
	return (fresh_new);
}
