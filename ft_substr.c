/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:07:19 by isak              #+#    #+#             */
/*   Updated: 2020/05/06 18:03:59 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*fresh;

	if (!s)
		return (NULL);
	fresh = (char *)malloc((len + 1) * sizeof(char));
	if (fresh == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		ft_bzero(fresh, len + 1);
	else
	{
		s += start;
		ft_strlcpy(fresh, s, len + 1);
	}
	return (fresh);
}
