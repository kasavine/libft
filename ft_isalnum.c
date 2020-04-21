/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 11:56:48 by isak              #+#    #+#             */
/*   Updated: 2020/04/21 10:14:15 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	isalnum -- alphanumeric character test
**
**	The isalnum() function returns zero if the character tests false and
**		returns non-zero if the character tests true.
*/

#include "libft.h"

int		ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z') ||
		(c >= '0' && c <= '9'));
}
