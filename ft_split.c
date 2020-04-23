/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <isak@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:05:53 by isak              #+#    #+#             */
/*   Updated: 2020/04/23 13:42:34 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates (with malloc(3)) and returns an array of strings obtained by
**		splitting ’s’ using the character ’c’ as a delimiter.  The array
**		must be ended by a NULL pointer.
**
**	char **ft_split(char const *s, char c);
**		#1.  The string to be split.
**		#2.  The delimiter character.
**
**	Return value - The array of new strings resulting from the split.
**		NULL if the allocation fails.
**
**	External functs - malloc, free
*/

#include "libft.h"

static	int		ft_count_words(char const *s, char c, int len)
{
	int			prev_state;
	int			word_count;
	int			cur_index;
	int			cur_state;

	prev_state = 2;
	word_count = 0;
	cur_index = 0;
	while (cur_index != len)
	{
		cur_state = s[cur_index] == c ? 2 : 1;
		if (cur_state == 1 && prev_state == 2)
			word_count++;
		cur_index++;
		prev_state = cur_state;
	}
	return (word_count);
}

static	int		ft_word_len(char const *s, char c, int pos, int len)
{
	int			index;

	index = pos + 1;
	while (index < len)
	{
		if (s[index] == c)
			return (index - pos);
		index++;
	}
	return (len - pos);
}

char			**ft_split(char const *s, char c)
{
	int			cur_state;
	int			cur_word;
	size_t		cur_index;
	int			prev_state;
	int			word_len;
	char		**res;

	if (!s)
		return (NULL);
	res = (char **)malloc(sizeof(char *) * ft_count_words(s, c, ft_strlen(s)));
	if (!res)
		return (NULL);
	cur_word = 0;
	cur_index = 0;
	prev_state = 2;
	while (cur_index != ft_strlen(s))
	{
		cur_state = s[cur_index] == c ? 2 : 1;
		if (cur_state == 1 && prev_state == 2)
		{
			word_len = ft_word_len(s, c, cur_index, ft_strlen(s));
			res[cur_word] = malloc(sizeof(char) * word_len + 1);
			if (res[cur_word] == NULL)
				return (NULL);
			ft_strncpy(res[cur_word], s + cur_index, word_len);
			res[cur_word++][word_len] = '\0';
		}
		cur_index++;
		prev_state = cur_state;
	}
	return (res);
}
