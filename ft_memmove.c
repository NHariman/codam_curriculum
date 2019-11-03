/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 21:40:49 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/03 20:10:52 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*source;
	unsigned char	temp;
	size_t			i;

	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	if ((!dest && !source && len == 0) || (!dest && !source))
		return (dst);
	while (i < len)
	{
		if (*dest == *source)
		{
			temp = *source;
			*dest = temp;
		}
		else
			*dest = *source;
		dest++;
		source++;
		i++;
	}
	return (dst);
}
