/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 05:00:23 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/01 05:36:00 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *mem;

	mem = (unsigned char *)malloc(size * count);
	while (count > 0)
	{
		mem = 0;
		mem++;
		count--;
	}
	return (mem);
}
