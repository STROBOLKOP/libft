/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efret <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:45:22 by efret             #+#    #+#             */
/*   Updated: 2023/11/22 15:45:50 by efret            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_count_words(const char *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] && (s[i] != c))
			count++;
		while (s[i] && (s[i] != c))
			i++;
		while (s[i] && (s[i] == c))
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	w_count;
	unsigned int	i;
	unsigned int	w_idx;
	unsigned int	w_len;
	char			**res;

	w_count = ft_count_words(s, c);
	res = malloc(sizeof(char *) * (w_count + 1));
	if (!res)
		return (NULL);
	i = 0;
	w_idx = 0;
	while (s[i] && w_idx < w_count)
	{
		w_len = 0;
		while (s[i + w_len] && (s[i + w_len] != c))
			w_len++;
		if (w_len)
			res[w_idx++] = ft_substr(s, i, w_len);
		i += w_len;
		while (s[i] && (s[i] == c))
			i++;
	}
	res[w_idx] = 0;
	return (res);
}
