/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:08:28 by isak              #+#    #+#             */
/*   Updated: 2020/03/05 10:08:32 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char			*fresh_new;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	fresh_new = ft_strnew(ft_strlen(s));
	if (fresh_new == NULL)
		return (NULL);
	while (s[i])
	{
		fresh_new[i] = (*f)(s[i]);
		i++;
	}
	return (fresh_new);
}
