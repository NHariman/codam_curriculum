/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 18:52:39 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/01 21:12:25 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	if (ft_strlen(src) >= dstsize)
	{
		dst = ft_truncate(dst);
		return (dst);
	}
	if (dstsize == 0)
		return (0);
}
