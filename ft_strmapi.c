/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:08:17 by isak              #+#    #+#             */
/*   Updated: 2020/04/23 15:28:06 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Applies the function ’f’ to each character of the string ’s’ to create
**		a new string (with malloc(3)) resulting from successive
**		applications of ’f’.
**
**	char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
**		#1.  The string on which to iterate.
**		#2.  The function to apply to each character.
**
**	Return value - The string created from the successive applications of ’f’.
**		Returns NULL if the allocation fails.
**
**	External functs - malloc
*/

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fresh_new;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	fresh_new = ft_strdup(s);
	if (fresh_new == NULL)
		return (NULL);
	while (fresh_new[i])
	{
		fresh_new[i] = (*f)(i, fresh_new[i]);
		i++;
	}
	fresh_new[i] = '\0';
	return (fresh_new);
}
