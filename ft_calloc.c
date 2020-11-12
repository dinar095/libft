/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desausag <desausag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:01:26 by desausag          #+#    #+#             */
/*   Updated: 2020/11/12 16:20:02 by desausag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned	i;
	void		*ptr;

	i = num * size;
	ptr = malloc(i);
	if (ptr)
		ft_memset(ptr, 0, i);
	return (ptr);
}
