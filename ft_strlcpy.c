/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 18:50:54 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/03 15:17:24 by nhariman      ########   odam.nl         */
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
	char	*source;
	size_t	i;

	source = (char *)src;
	i = 0;
	if (ft_strlen(dst) >= dstsize)
	{
		dst = ft_truncate(dst);
		return (ft_strlen(dst));
	}
	else if (ft_strlen(src) + 1 < dstsize)
		ft_memcpy(dst, src, ft_strlen(source) + 1);
	else if (dstsize != 0)
	{
		while (i < dstsize)
			ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (ft_strlen(source));
}
