/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochajou <mochajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 00:30:01 by mochajou          #+#    #+#             */
/*   Updated: 2024/09/05 04:40:11 by mochajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len_n(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*to_str(char *s, unsigned int N, size_t len)
{
	s[len] = '\0';
	while (len != 0)
	{
		s[len - 1] = (N % 10 + '0');
		len--;
		N /= 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	size_t			len;
	char			*s;

	len = len_n(n);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		num = -n;
		*s++ = '-';
		return (to_str(s, num, len) - 1);
	}
	num = n;
	return (to_str(s, num, len));
}
