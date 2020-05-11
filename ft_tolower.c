/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:33:40 by isak              #+#    #+#             */
/*   Updated: 2020/04/26 20:22:43 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	tolower -- upper case to lower case letter conversion
**
**	The tolower() function converts an upper-case letter to the corresponding
**		lower-case letter.  The argument must be representable as an unsigned
**		char or the value of EOF.
**
**	If the argument is an upper-case letter, the tolower() function returns
**		the corresponding lower-case letter if there is one; otherwise, the
**		argument is returned unchanged.
*/

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + ('a' - 'A');
	return (c);
}
