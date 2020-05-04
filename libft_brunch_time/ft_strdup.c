/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:38:04 by isak              #+#    #+#             */
/*   Updated: 2020/02/24 12:54:24 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *str)
{
	char	*copy;
	int		i;

	copy = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (copy != NULL)
	{
		i = 0;
		while (str[i])
		{
			copy[i] = str[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
	else
	{
		return (NULL);
	}
}
