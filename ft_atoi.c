/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 11:16:54 by isak              #+#    #+#             */
/*   Updated: 2020/04/23 19:49:26 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	atoi -- convert ASCII string to integer
**
**	The atoi() function converts the initial portion of the string pointed to
**		by str to int representation.
*/

#include "libft.h"

static	int	is_white_space(int c)
{
	return (c == '\t' || c == '\n' || c == ' ' ||
			c == '\f' || c == '\r' || c == '\v');
}

int			ft_atoi(const char *str)
{
	int		i;
	long	result;
	long	sign;

	result = 0;
	sign = 1;
	i = 0;
	while (is_white_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		result = ((result * 10) + (str[i] - '0'));
		if (result * sign > 2147483647l)
			return (-1);
		else if (result * sign < -2147483648l)
			return (0);
		i++;
	}
	return ((int)(result * sign));
}
