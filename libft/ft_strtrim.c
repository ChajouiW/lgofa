/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochajou <mochajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 01:19:58 by mochajou          #+#    #+#             */
/*   Updated: 2024/09/02 16:50:58 by mochajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trim_check(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	trim_skip(char const *s1, char const *set, int s)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (s == 1)
	{
		while (s1[start])
		{
			if (!trim_check(s1[start], set))
				break ;
			start++;
		}
		return (start);
	}
	else
	{
		while (end > start)
		{
			if (!trim_check(s1[end], set))
				break ;
			end--;
		}
		return (end);
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*fresh;
	char	*str;

	if (!s1)
		return (NULL);
	start = trim_skip(s1, set, 1);
	end = trim_skip(s1, set, 2);
	if (start > end)
		return (ft_strdup(""));
	fresh = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!fresh)
		return (NULL);
	str = fresh;
	while (start <= end)
	{
		*str++ = s1[start++];
	}
	*str = '\0';
	return (fresh);
}
