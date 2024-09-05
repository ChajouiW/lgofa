/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochajou <mochajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 22:45:46 by mochajou          #+#    #+#             */
/*   Updated: 2024/09/04 23:08:14 by mochajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*putnbr(int n)
{
	char	*s;
	int		i;

	i = 0;
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		n = -n;
		s[i] = '-';
		i++;
	}
	while (n >= 0)
	{
		s[i] = n % 10 + '0';
		n / 10;
		i++;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s2;
	char	*s1;
	int		i;
	int		j;

	j = ft_strlen(putnbr(n));
	i = 0;
	s1 = putnbr(n);
	s2 = (char *)malloc(sizeof(char) * (j + 1));
	if (!s2)
		return (NULL);
	while (i < j)
	{
		if (s1[0] == '-')
		{
			s2[i] = s[0];
			i++;
		}
		s2[i] = s1[j];
		j--;
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
