/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochajou <mochajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:36:28 by mochajou          #+#    #+#             */
/*   Updated: 2024/08/21 21:11:51 by mochajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*str;

	str = s;
	while (len--)
		*str++ = (unsigned char)c;
	return (s);
}
