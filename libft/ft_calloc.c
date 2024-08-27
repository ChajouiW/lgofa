/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochajou <mochajou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 04:22:05 by mochajou          #+#    #+#             */
/*   Updated: 2024/08/27 00:18:36 by mochajou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	t_size;
	void	*arr;

	t_size = nmemb * size;
	arr = (void *)malloc(t_size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, t_size);
	return (arr);
}
