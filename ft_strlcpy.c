/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 18:50:54 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/01 21:25:38 by nhariman      ########   odam.nl         */
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
	int		i;

	source = (char *)src;
	i = 0;
	if (dstsize != 0)
	{
		while (i < dstsize)
		{
			dst[i] = source[i];
			i++;
		}
		dst[i] = '\0';
		if (ft_strlen(dst) >= dstsize)
		{
			dst = ft_truncate(dst);
			return (dst);
		}
		return (ft_strlen(source) + 1);
	}
	return (0);
}
