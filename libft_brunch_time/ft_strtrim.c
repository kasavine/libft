/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:06:28 by isak              #+#    #+#             */
/*   Updated: 2020/03/05 10:06:30 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	is_white_space(int c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char		*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	int		len;
	char	*fresh_trimmed;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s);
	while (start < end && is_white_space(s[start]))
		start++;
	if (start == end)
		return ("");
	while (is_white_space(s[end - 1]))
		end--;
	fresh_trimmed = ft_strnew(end - start);
	if (fresh_trimmed == NULL)
		return (NULL);
	len = end - start;
	return (ft_strncpy(fresh_trimmed, s + start, len));
}
