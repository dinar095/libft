/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desausag <desausag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:30:41 by desausag          #+#    #+#             */
/*   Updated: 2020/11/11 17:22:22 by desausag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *destination, const char *append, size_t size)
{
	size_t	dst_size;
	size_t 	n;

	dst_size = 0;
	n = 0;
	while (destination[dst_size] != '\0' && dst_size < size)
		dst_size++;
	if (dst_size == size)
		return (size + ft_strlen(append));
	while (append[n] != '\0' && (dst_size) < size - 1)
	{
		destination[dst_size++] = append[n++];
	}
	destination[dst_size] = '\0';
	return (dst_size);
}
