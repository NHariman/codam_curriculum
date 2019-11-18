/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 06:29:51 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/17 19:03:48 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = ft_strlen(str) - 1;
	str = &str[i - 1];
	if (c == '\0')
		return (ft_strchr(s, c));
	else
	{
		while (i >= 0)
		{
			if (*str == (char)c)
				return (str);
			str--;
			i--;
		}
	}
	return (NULL);
}
