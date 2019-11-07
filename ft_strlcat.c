/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 18:52:39 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/07 21:51:38 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dstend;
	int			maxappend;
	int			i;
	int			dstnull;

	dstend = ft_strlen(dst);
	maxappend = dstsize - ft_strlen(dst) - 1;
	i = 0;
	if (dstend > dstsize)
		dstnull = dst[dstsize] == '\0';
	else
		dstnull = dst[dstend] == '\0';
	if (dstsize != 0 && ft_strlen(dst) <= dstsize)
	{
		while (i < maxappend && *src != '\0')
		{
			dst[dstend + i] = *src;
			i++;
			src++;
		}
		dst[dstend + i] = '\0';
	}
	if (!dstnull)
		return (dstsize + ft_strlen(src));
	return (dstend - 1 + ft_strlen(src));
}
// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	j;
// 	size_t	len;
// 	int		found_null;

// 	if (size == 0)
// 		return (ft_strlen(src));
// 	len = ft_strlen(dst);
// 	j = 0;
// 	found_null = dst[len > size ? size : len] != 0;
// 	while (len + j < size - 1 && src[j])
// 	{
// 		dst[len + j] = src[j];
// 		j++;
// 	}
// 	dst[len + j] = 0;
// 	if (found_null)
// 		return (ft_strlen(src) + size);
// 	else
// 		return (len + ft_strlen(src));
// }