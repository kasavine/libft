/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 15:35:16 by isak              #+#    #+#             */
/*   Updated: 2020/04/26 20:21:27 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	strcat -- concatenate strings
**
**	The strcat() function appends a copy of the null-terminated string s2
**		to the end of the null-terminated string s1, then add a terminating
**		`\0'.  The string s1 must have sufficient space to hold the result.
**	The strcat() function returns the pointer s1.
*/

#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	int i;
	int j;

	i = 0;
	while (dst[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}
