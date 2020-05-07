/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:05:53 by isak              #+#    #+#             */
/*   Updated: 2020/05/06 19:37:02 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *s, char c)
{
	int			cur_index;
	int			cur_state;

	cur_index = 0;
	cur_state = 0;
	while (*s)
	{
		if (*s != c && cur_state == 0)
		{
			cur_state = 1;
			cur_index++;
		}
		else if (*s == c)
			cur_state = 0;
		s++;
	}
	return (cur_index);
}

char			**ft_split(char const *s, char c)
{
	int			i;
	size_t		word_len;
	char		**res_of_split;

	if (!s || !(res_of_split = 
			(char **)malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			res_of_split[i++] = ft_substr(s, 0, word_len);
			s = s + word_len;
			
		}
	}
	
	res_of_split[i] = NULL;
	return (res_of_split);
}
