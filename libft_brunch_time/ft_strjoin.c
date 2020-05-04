/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:06:47 by isak              #+#    #+#             */
/*   Updated: 2020/03/05 10:06:48 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *fresh_new;

	if (!s1 || !s2)
		return (NULL);
	fresh_new = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (fresh_new == NULL)
		return (NULL);
	ft_strcpy(fresh_new, s1);
	ft_strcat(fresh_new, s2);
	return (fresh_new);
}
