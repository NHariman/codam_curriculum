/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 18:52:39 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/20 16:16:42 by nhariman      ########   odam.nl         */
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
	maxappend = dstsize - dstend - 1;
	i = 0;
	if (dstend > dstsize)
		dstnull = dst[dstsize] == '\0';
	else
		dstnull = dst[dstend] == '\0';
	if (dstsize != 0 && dstend <= dstsize)
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
	return (ft_strlen(dst) + ft_strlen(src));
}
