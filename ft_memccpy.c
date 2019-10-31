/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 21:11:03 by nhariman       #+#    #+#                */
/*   Updated: 2019/10/31 22:12:00 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n > 0)
	{
		if ((unsigned char)src == (unsigned char)c)
		{
			dst = dst++;
			return (&dst);
		}
		else
		{
			*((unsigned char *)dst) = *((unsigned char *)src);
			dst++;
			src++;
			n--;
		}
	}
	return (0);
}
