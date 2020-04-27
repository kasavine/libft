/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 14:41:27 by isak              #+#    #+#             */
/*   Updated: 2020/04/26 20:22:03 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	strlen -- find length of string
**
**	The strlen() function computes the length of the string s.
**
**	The strlen() function returns the number of characters that precede the
**		terminating NUL character.
*/

#include "libft.h"

size_t		ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
