/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:03:27 by isak              #+#    #+#             */
/*   Updated: 2020/04/21 17:14:45 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Outputs the integer ’n’ to the given file descriptor.
**
**	void ft_putnbr_fd(int n, int fd);
**		#1.  The integer to output.
**		#2.  The file descriptor on which to write.
*/

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number = -n;
	}
	else
		number = n;
	if (number >= 10)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd((number % 10) + '0', fd);
}
