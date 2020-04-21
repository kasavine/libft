/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:05:44 by isak              #+#    #+#             */
/*   Updated: 2020/04/21 10:14:17 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	isascii -- test for ASCII character
**
**	The isascii() function tests for an ASCII character, which is any charac-
**		ter between 0 and octal 0177 inclusive.
*/

#include "libft.h"

int		ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
