/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:08:17 by isak              #+#    #+#             */
/*   Updated: 2020/04/27 14:23:34 by isak             ###   ########.fr       */
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
	fresh_new = ft_strdup(s);
	if (fresh_new == NULL)
		return (NULL);
	while (fresh_new[i])
	{
		fresh_new[i] = (*f)(i, fresh_new[i]);
		i++;
	}
	fresh_new[i] = '\0';
	return (fresh_new);
}
