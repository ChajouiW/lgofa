/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssplit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochajou <mochajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 20:43:25 by mochajou          #+#    #+#             */
/*   Updated: 2024/09/04 21:57:09 by mochajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		x;

	i = 0;
	count = 0;
	x = 0;
	while (s[i])
	{
		if (s[i] == c)
			x = 0;
		else if (s[i] != c && x == 0)
		{
			count++;
			x = 1;
		}
		i++;
	}
	return (count);
}

static char	*ft_t3mar(char const *s, char *word, size_t len, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (j < len)
	{
		while (s[i] && s[i] == c)
			i++;
		word[j] = s[i];
		j++;
		i++;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_free(char **arr, size_t word)
{
	while (word > 0)
	{
		free (arr[--word]);
	}
	free (arr);
	return (NULL);
}

static char	**ft_t3mar_arr(char **arr, char const *s, char c, size_t words)
{
	size_t	len;
	size_t	word_i;
	size_t	i;

	while (word_i < words)
	{
		i = 0;
		len = 0;
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			len++;
			i++;
		}
		arr[word_i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!arr[word_i])
			return (ft_free(arr, word_i));
		arr[word_i] = ft_t3mar(s, arr[word_i], len, c);
		s += i;
		word_i++;
	}
	arr[words] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**arr;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	ft_t3mar_arr(arr, s, c, words);
	return (arr);
}
