/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 11:56:48 by isak              #+#    #+#             */
/*   Updated: 2020/04/26 20:14:33 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	isalnum -- alphanumeric character test
**
**	The isalnum() function returns zero if the character tests false and
**		returns non-zero if the character tests true.
*/

int		ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z') ||
		(c >= '0' && c <= '9'));
}
