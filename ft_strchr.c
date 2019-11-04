/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 05:35:14 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/04 18:13:02 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if (s == NULL)
		return (str - 1);
	while (s)
	{
		if (*str == (char)c)
			return (str);
		if (*str == '\0')
			return (0);
		str++;
	}
	return (0);
}
