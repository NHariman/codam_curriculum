/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 05:35:14 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/05 15:54:36 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (1)
	{
		if (*str == (char)c)
			return (str);
		if (*str == '\0')
			return (0);
		str++;
	}
	return (0);
}
