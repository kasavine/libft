/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:32:33 by isak              #+#    #+#             */
/*   Updated: 2020/04/26 20:22:37 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	toupper -- lower case to upper case letter conversion
**
**	The toupper() function converts a lower-case letter to the corresponding
**		upper-case letter.  The argument must be representable as an unsigned
**		char or the value of EOF.
**
**	If the argument is a lower-case letter, the toupper() function returns
**		the corresponding upper-case letter if there is one; otherwise, the
**		argument is returned unchanged.
*/

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - ('a' - 'A');
	return (c);
}
