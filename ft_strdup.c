/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 04:44:56 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/03 15:15:27 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		len;

	len = 0;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	str = (char *)malloc((sizeof(char) * len) + 1);
	if (!str)
		return (NULL);
	while (len > 0)
	{
		str = (char *)s1;
		str++;
		s1++;
		len--;
	}
	return (str);
}
