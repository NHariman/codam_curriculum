/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 06:29:51 by nhariman      #+#    #+#                 */
/*   Updated: 2020/06/10 18:55:45 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = ft_strlen(str);
	str = (str + i);
	if (c == '\0')
		return (ft_strchr(s, c));
	else
	{
		while (i > 0 && str)
		{
			i--;
			str--;
			if (*str == (char)c)
				return (str);
		}
	}
	return (NULL);
}
