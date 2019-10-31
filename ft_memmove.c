/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 21:40:49 by nhariman       #+#    #+#                */
/*   Updated: 2019/10/31 21:51:14 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	while (len > 0)
	{
		*((unsigned char *)dst) = *((unsigned char *)src);
		dst++;
		src++;
		len--;
	}
	return (dst);
}
