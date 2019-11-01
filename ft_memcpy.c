/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 17:54:48 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/01 00:25:16 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n > 0)
	{
		*((unsigned char *)dst) = *((unsigned char *)src);
		dst++;
		src++;
		n--;
	}
	return (dst);
}
