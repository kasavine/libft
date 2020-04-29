/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 11:52:57 by isak              #+#    #+#             */
/*   Updated: 2020/04/27 14:23:57 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *h, const char *n, size_t len)
{
	char	*h_new;
	size_t	needle_len;
	size_t	j;
	size_t	i;

	h_new = (char *)h;
	needle_len = ft_strlen(n);
	if (!(needle_len))
		return (h_new);
	if (ft_strlen(h) < needle_len || len < needle_len)
		return (NULL);
	i = 0;
	while (h_new[i] && i <= len - needle_len)
	{
		j = 0;
		while (n[j] && n[j] == h_new[i + j])
			j++;
		if (j == needle_len)
			return (&h_new[i]);
		i++;
	}
	return (NULL);
}
