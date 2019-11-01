/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 06:29:51 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/01 06:36:28 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str;

	str = (char *)s;
	while (str)
	{
		if (*str == (char)c)
		{
			ft_strrchr(str++, c);
			return (str);
		}
		str++;
	}
	return (0);
}
