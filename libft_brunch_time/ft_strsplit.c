/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:05:53 by isak              #+#    #+#             */
/*   Updated: 2020/03/05 10:05:55 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char const *s, char c, int len) {
	const int	in_word = 1;
	const int	sep_found = 2;
	int			prev_state;
	int			word_count;
	int			cur_index;
	int			cur_state;

	prev_state = sep_found;
	word_count = 0;
	cur_index = 0;
	while (cur_index != len)
	{
		cur_state = s[cur_index] == c ? sep_found : in_word;
		if (cur_state == in_word && prev_state == sep_found)
		{
			word_count++;
		}
		cur_index++;
		prev_state = cur_state;
	} 
	return (word_count);
}

static int 		tf_word_len(char const *s, char c, int pos, int len)
{
	int			index;

	index = pos + 1;
	while (index < len)
	{
		if (s[index] == c)
		{
			return (index - pos);
		}
		index++;
	}
	return (len - pos);
}

char			** ft_strsplit(char const *s, char c)
{
	const int	in_word = 1;
	const int	sep_found = 2;
	int			len;
	int			words_count;
	int			cur_state;
	int			cur_word;
	int			cur_index;
	int			prev_state;
	int			word_len;
	char		**res;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	words_count = ft_count_words(s, c, len);
	res = (char **)malloc(sizeof(char *) * words_count);
	if (!res)
		return (NULL);
	cur_word = 0;
	cur_index = 0;
	prev_state = sep_found;
	while (cur_index != len)
	{
		cur_state = s[cur_index] == c ? sep_found : in_word;
		if (cur_state == in_word && prev_state == sep_found)
		{
			word_len = tf_word_len(s, c, cur_index, len);
			res[cur_word] = malloc(sizeof(char) * word_len + 1);
			if (res[cur_word] == NULL)
			{
				// cleanup
				return (NULL);
			}
			ft_strncpy(res[cur_word], s + cur_index, word_len);
			res[cur_word][word_len] = '\0';
			cur_word++;
		}
		cur_index++;
		prev_state = cur_state;
	} 
	return (res);
}
