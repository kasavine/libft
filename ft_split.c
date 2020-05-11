/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:05:53 by isak              #+#    #+#             */
/*   Updated: 2020/05/05 20:40:49 by isak             ###   ########.fr       */
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

static void		free_split_words(char **res_of_split, int words)
{
	while (words >= 0)
	{
		free(res_of_split[words]);
		words--;
	}
	free(res_of_split);
	res_of_split = NULL;
}

static char		*get_word(const char *s, int start, char c)
{
	char		*res;
	int			i;
	int			end;

	end = start;
	while (s[end] && s[end] != c)
		end++;
	i = 0;
	if (!(res = malloc((end - start) * sizeof(char))))
		return (NULL);
	while (start < end)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}

char			**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	char		**res_of_split;

	if (!s || !(res_of_split = malloc((
			count_words(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			res_of_split[j] = get_word(s, i, c);
			if (!res_of_split[j])
			{
				free_split_words(res_of_split, j - 1);
				return (NULL);
			}
			j++;
		}
		i++;
	}
	res_of_split[j] = 0;
	return (res_of_split);
}
