/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 05:00:23 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/05 20:12:34 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int			*mem;
	size_t		i;

	mem = (int *)malloc((count * size));
	i = 0;
	if (!mem)
		return (NULL);
	while (i < count)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
