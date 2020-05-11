/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:05:24 by isak              #+#    #+#             */
/*   Updated: 2020/04/28 13:36:40 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res_str;
	long	number;
	size_t	len;

	number = n;
	len = n > 0 ? 0 : 1;
	number = number > 0 ? number : -number;
	while (n)
	{
		n /= 10;
		len++;
	}
	if (!(res_str = (char *)malloc(len + 1)))
		return (0);
	*(res_str + len--) = '\0';
	while (number > 0)
	{
		*(res_str + len--) = number % 10 + '0';
		number /= 10;
	}
	if (len == 0 && res_str[1] == '\0')
		*(res_str + len) = '0';
	else if (len == 0 && res_str[1] != '\0')
		*(res_str + len) = '-';
	return (res_str);
}
