/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 17:54:48 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/07 15:06:39 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destination;
	unsigned char	*source;

	i = 0;
	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dst);
}
