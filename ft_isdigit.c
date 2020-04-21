/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 11:48:32 by isak              #+#    #+#             */
/*   Updated: 2020/04/21 10:17:19 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The isdigit() function tests for a decimal digit character.
**
**	The isdigit() function return zero if the character tests
**		false and return non-zero if the character tests true.
*/

#include "libft.h"

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
