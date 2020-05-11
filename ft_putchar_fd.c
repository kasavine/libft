/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 09:42:00 by isak              #+#    #+#             */
/*   Updated: 2020/04/26 20:20:46 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Outputs the character ’c’ to the given file descriptor.
**
**	void ft_putchar_fd(char c, int fd);
**		#1.  The character to output.
**		#2.  The file descriptor on which to write.
**
**	External functs - write
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
