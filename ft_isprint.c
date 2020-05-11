/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:21:34 by isak              #+#    #+#             */
/*   Updated: 2020/04/26 20:15:01 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	isprint -- printing character test (space character inclusive)
**
**	The isprint() function returns zero if the character tests false and
**		returns non-zero if the character tests true.
*/

int		ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
