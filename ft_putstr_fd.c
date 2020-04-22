/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 09:55:28 by isak              #+#    #+#             */
/*   Updated: 2020/04/21 17:14:08 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Outputs the string ’s’ to the given file descriptor.
**
**	void ft_putstr_fd(char *s, int fd);
**		#1.  The string to output.
**		#2.  The file descriptor on which to write.
*/

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
