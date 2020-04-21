/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 11:27:28 by isak              #+#    #+#             */
/*   Updated: 2020/04/21 10:14:16 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	isalpha -- alphabetic character test
**
**	The isalpha() function returns zero if the character tests false and
**		returns non-zero if the character tests true.
*/

#include "libft.h"

int		ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
