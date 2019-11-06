/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 18:52:39 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/06 15:32:38 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*source;
	int		dstend;
	int		maxappend;

	source = (char *)src;
	dstend = ft_strlen(dst) + 1;
	maxappend = dstsize - ft_strlen(dst) - 1;
	if (ft_strlen(src) >= dstsize)
	{
		return (ft_strlen(dst));
	}
	else if (dstsize == 0)
		return (0);
	else if (dstend < maxappend)
	{
		*dst = dst[dstend];
		ft_memcpy(dst, src, dstsize);
		dst[dstsize - 1] = '\0';
	}
	return (ft_strlen(dst) + ft_strlen(source));
}
