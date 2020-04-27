/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:05:24 by isak              #+#    #+#             */
/*   Updated: 2020/04/26 20:17:34 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates (with malloc(3)) and returns a string representing the integer
**		received as an argument. Negative numbers must be handled.
**
**	char *ft_itoa(int n);
**		#1.  the integer to convert.
**
**	Return value - The string representing the integer.
**		NULL if the allocation fails.
**
**	External functs - malloc
*/

#include "libft.h"

static	int		ft_len(long n)
{
	int			len;

	len = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		n = -n;
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static	char	*ft_malloc_str(int n)
{
	int			len;
	char		*str;

	len = ft_len(n);
	str = NULL;
	if (n >= 0)
		str = malloc(sizeof(char) * (len + 1));
	else
	{
		str = malloc(sizeof(char) * (len + 2));
		if (!str)
			return (NULL);
		str[0] = '-';
	}
	return (str);
}

static int		ft_stop(int n)
{
	if (n >= 0)
		return (0);
	else
		return (1);
}

char			*ft_itoa(int n)
{
	int			len;
	char		*str;
	int			index;
	int			stop;
	char		number;

	str = ft_malloc_str(n);
	if (!str)
		return (NULL);
	len = ft_len(n);
	index = n >= 0 ? len - 1 : len;
	stop = ft_stop(n);
	while (index >= stop)
	{
		number = (n >= 0 ? (n % 10) : -(n % 10)) + '0';
		str[index] = number;
		index--;
		n /= 10;
	}
	if (n >= 0)
		str[len + 1] = '\0';
	else
		str[len + 2] = '\0';
	return (str);
}
