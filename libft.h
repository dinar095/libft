/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desausag <desausag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 13:24:50 by desausag          #+#    #+#             */
/*   Updated: 2020/11/12 13:52:54 by desausag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int ch);
int			ft_isdigit(int ch);
int			ft_isprint(int c);
size_t		ft_strlen(const char *src);
int			ft_strncmp(const char *s1, const char *s2, size_t c);
char		*ft_strrchr(const char *str, int ch);
int			ft_tolower(int character);
int			ft_toupper(int c);
int			ft_atoi(const char *str);
void		*ft_memset(void *destination, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *destination, const void *source, size_t n);
void		*ft_memccpy(void *destination, const void *source, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *arr, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strchr(const char *s, int c);
size_t 		ft_strlcat(char *destination, const char *append, size_t size);
size_t		ft_strlcpy(char *destination, const char *append, size_t size);
char		*ft_strnstr(const char *large, const char *small, size_t len);
char 		*ft_strdup(const char *str);
#endif
