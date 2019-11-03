/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 21:11:03 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/03 18:38:15 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	size_t			i;

	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (*source == (unsigned char)c)
		{
			*destination = *source;
			destination++;
			return (destination);
		}
		else
		{
			*destination = *source;
			destination++;
			source++;
			i++;
		}
	}
	return (0);
}
