/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desausag <desausag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:02:40 by desausag          #+#    #+#             */
/*   Updated: 2020/11/13 14:53:38 by desausag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen(s1);
	while ((ft_strchr(set, s1[i])))
		i++;
	while ((ft_strchr(set, s1[n])))
	{
		n--;
		if (i > n)
		{
			ptr = (char *)malloc(sizeof(char));
			ptr[0] = '\0';
			return (ptr);
		}
	}
	ptr = ft_substr((char *)s1, i, n - i + 1);
	return (ptr);
}
