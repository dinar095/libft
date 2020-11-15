/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desausag <desausag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 11:20:00 by desausag          #+#    #+#             */
/*   Updated: 2020/11/15 11:52:29 by desausag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*buf;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s);
	if (!s)
		return (NULL);
	buf = ft_calloc(len, sizeof(char));
	while (i < len)
	{
		buf[i] = (*f)(i, s[i]);
		i++;
	}
	return (buf);
}
