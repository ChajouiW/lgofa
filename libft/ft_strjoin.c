/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochajou <mochajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:04:56 by mochajou          #+#    #+#             */
/*   Updated: 2024/09/01 19:35:56 by mochajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	char	*str;
	size_t	l1;
	size_t	l2;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	fresh = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (!fresh)
		return (NULL);
	str = fresh;
	while (*s1)
	{
		*str++ = *s1++;
	}
	while (*s2)
	{
		*str++ = *s2++;
	}
	*str = '\0';
	return (fresh);
}
