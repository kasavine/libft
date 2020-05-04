/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isak <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 10:05:24 by isak              #+#    #+#             */
/*   Updated: 2020/03/05 10:05:25 by isak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int      ft_len(long n) {

	int len = 0;

	if (n == 0) {
		return 1;
	} else if (n < 0) {
		n = -n;
	}
	while (n > 0) {
		n /= 10;
		len++;
	}
	return len;
}

char	*ft_itoa(int n)
{
	int len = ft_len(n);
	int sign = n;

	char* str = NULL;

	if (n >= 0) {
		str = malloc(sizeof(char) * (len + 1));
	} else {
		str = malloc(sizeof(char) * (len + 2));
		if (!str) {
			return NULL;
		}
		str[0] = '-';
	}


	// printf("size of input: %d\n", len);
	if (!str) {
		return NULL;
	}
	int index = len;
	int stop = n >= 0 ? 0 : 1;
	while (index >= stop) {
		// printf("index is: %d\n", index);
		int tail = sign >= 0 ? (n % 10) :  - (n % 10);
		// printf("tail is: %d\n", tail);
		char number = tail + '0';
		// printf("tail number is: %c\n", number);
		if (sign > 0) {
			str[index - 1] = number;
		} else {
			str[index] = number;
		}
		index--;
		n /= 10;
	}
	// printf("result: \"%s\"\n", str);
	int end_position = len;
	if (sign < 0) {
		end_position = len + 1;
	}
	// printf("end_position: %i\n", end_position);
	str[end_position] = '\0';
	return str;
}
