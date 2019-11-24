/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 18:52:39 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/24 16:52:15 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dstend;
	size_t		maxappend;
	int			dstnull;

	dstend = ft_strlen(dst);
	maxappend = dstsize - dstend;
	if (dstend > dstsize)
		dstnull = (dst[dstsize] == '\0');
	else
		dstnull = (dst[dstend] == '\0');
	if (dstsize != 0 && dstend <= dstsize)
		ft_strlcpy((dst + dstend), src, maxappend);
	if (dstnull == 0)
		return (dstsize + ft_strlen(src));
	return (dstend + ft_strlen(src));
}
