/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:08:17 by isak              #+#    #+#             */
/*   Updated: 2020/03/05 10:08:18 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*fresh_new;
	int		i;

	if (!s || !f)
		return (NULL);
	i = 0;
	fresh_new = ft_strnew(ft_strlen(s));
	if (fresh_new == NULL)
		return (NULL);
	while (s[i])
	{
		fresh_new[i] = (*f)(i, s[i]);
		i++;
	}
	return (fresh_new);
}
