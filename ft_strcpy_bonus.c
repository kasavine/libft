/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:18:37 by isak              #+#    #+#             */
/*   Updated: 2020/04/22 11:06:18 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	strcpy -- copy strings
**
**	The strcpy() function copy the string src to dst (including the terminating
**	`\0' character.)
**
**	The source and destination strings should not overlap, as the behavior is
**		undefined.
**
**	The strcpy() function returns dst.
*/

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
