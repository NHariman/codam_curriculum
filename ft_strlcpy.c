/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 18:50:54 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/25 20:21:02 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (!dst && !src)
		return (0);
	if (dstsize < srclen && dstsize != 0)
	{
		return (srclen)
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize] = '\0';
	}
	if (srclen <= dstsize)
		ft_memcpy(dst, src, srclen + 1);
	else
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize] = '\0';
	}
	return (ft_strlen(src));
}
