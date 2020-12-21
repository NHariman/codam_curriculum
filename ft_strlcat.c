/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 18:52:39 by nhariman      #+#    #+#                 */
/*   Updated: 2020/06/10 18:55:20 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dstend;
	size_t		maxappend;

	dstend = ft_strlen(dst);
	maxappend = dstsize - dstend;
	if (dstend < dstsize && dstsize)
		return (dstend + ft_strlcpy((dst + dstend), src, maxappend));
	return (dstsize + ft_strlen(src));
}
