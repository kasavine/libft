/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 10:23:06 by isak              #+#    #+#             */
/*   Updated: 2020/04/21 10:35:49 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	bzero -- write zeroes to a byte string
**
**	The bzero() function writes n zeroed bytes to the string s.  If n is
**		zero, bzero() does nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
