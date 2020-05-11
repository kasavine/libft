/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:05:44 by isak              #+#    #+#             */
/*   Updated: 2020/04/26 20:14:49 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	isascii -- test for ASCII character
**
**	The isascii() function tests for an ASCII character, which is any charac-
**		ter between 0 and octal 0177 inclusive.
*/

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
