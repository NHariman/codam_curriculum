/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 18:50:54 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/05 17:20:7 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_truncate(char *dst)
{
	while (dst)
	{
		*dst = '\0';
		dst++;
	}
	return (dst);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dst && src && dstsize > (size_t)ft_strlen(src))
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
	else
	{
		ft_truncate((char *)src);
		return (ft_strlen(src));
	}
}
