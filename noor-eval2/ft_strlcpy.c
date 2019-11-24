/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 18:50:54 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/22 21:08:13 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if (dst)
	{
		if (dstsize < (size_t)ft_strlen(src) && dstsize != 0)
		{
			ft_memcpy(dst, src, dstsize - 1);
			dst[dstsize - 1] = '\0';
			return (ft_strlen(src));
		}
		else if (dst && src && ft_strlen(src) <= dstsize)
		{
			if ((size_t)ft_strlen(src) < dstsize)
				ft_memcpy(dst, src, ft_strlen(src) + 1);
			else if (dstsize != 0)
			{
				ft_memcpy(dst, src, dstsize - 1);
				dst[dstsize] = '\0';
			}
			return (ft_strlen(src));
		}
		return (ft_strlen(src));
	}
	return (0);
}
