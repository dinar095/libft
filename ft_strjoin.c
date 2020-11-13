/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desausag <desausag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 09:38:48 by desausag          #+#    #+#             */
/*   Updated: 2020/11/13 09:56:40 by desausag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	i;

	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	ret = ft_calloc(i, sizeof(char));
	if (!ret)
		return (NULL);
	ft_strlcat(ret, s1, i);
	ft_strlcat(ret, s2, i);
	return (ret);
}
