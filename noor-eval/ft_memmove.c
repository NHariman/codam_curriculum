/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 21:40:49 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/24 16:42:44 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	size_t			i;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	if (!dest && !source)
		return (dst);
	while (i < len)
	{
		if ((size_t)dst - (size_t)src < len)
			dest[len - i - 1] = source[len - i - 1];
		else
			dest[i] = source[i];
		i++;
	}
	return (dst);
}
