/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:05:53 by isak              #+#    #+#             */
/*   Updated: 2020/04/27 21:34:22 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(const char *s, char c)
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

static char		*ft_find_word(const char *s, int start, int end)
{
	char		*res;
	int			i;

	i = 0;
	res = malloc((end - start) * sizeof(char));
	while (start < end)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}

char			**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	int			cur_index;
	char		**res_of_split;

	if (!s || !(res_of_split = malloc((
			ft_count_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	cur_index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && cur_index < 0)
			cur_index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && cur_index >= 0)
		{
			res_of_split[j++] = ft_find_word(s, cur_index, i);
			cur_index = -1;
		}
		i++;
	}
	res_of_split[j] = 0;
	return (res_of_split);
}
