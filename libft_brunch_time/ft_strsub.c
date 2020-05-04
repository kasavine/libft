/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:07:19 by isak              #+#    #+#             */
/*   Updated: 2020/03/05 10:07:20 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh_new;
	size_t		i;

	if (!s)
		return (NULL);
	i = 0;
	fresh_new = ft_strnew(len);
	if (fresh_new == NULL)
		return (NULL);
	while (i < len)
	{
		fresh_new[i] = s[start + i];
		i++;
	}
	return (fresh_new);
}
