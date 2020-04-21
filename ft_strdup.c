/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:38:04 by isak              #+#    #+#             */
/*   Updated: 2020/04/21 15:52:04 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	strdup -- save a copy of a string
**
**	The strdup() function allocates sufficient memory for a copy of the
**		string s1, does the copy, and returns a pointer to it.  The pointer may
**		subsequently be used as an argument to the function free(3).
**		If insufficient memory is available, NULL is returned and errno is
**		set to ENOMEM.
*/

#include "libft.h"

char		*ft_strdup(const char *str)
{
	char	*copy;
	int		i;

	copy = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (copy != NULL)
	{
		i = 0;
		while (str[i])
		{
			copy[i] = str[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
	else
		return (NULL);
}
