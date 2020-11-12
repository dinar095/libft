/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desausag <desausag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:11:55 by desausag          #+#    #+#             */
/*   Updated: 2020/11/11 13:22:29 by desausag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char *)arr;
	while (i != n)
	{
		if (a[i] == (unsigned char)c)
		{
			return ((void *)(a + i));
		}
		i++;
	}
	return (NULL);
}
