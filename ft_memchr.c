/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 21:51:26 by nhariman      #+#    #+#                 */
/*   Updated: 2020/06/10 18:54:16 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *chara;

	chara = (unsigned char *)s;
	while (n > 0)
	{
		if (*chara == (unsigned char)c)
			return (chara);
		chara++;
		n--;
	}
	return (0);
}
