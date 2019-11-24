/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 21:51:26 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/01 02:47:46 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *t;

	t = (unsigned char *)s;
	while (n > 0)
	{
		if (*t == (unsigned char)c)
			return (t);
		t++;
		n--;
	}
	return (0);
}
