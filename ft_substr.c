/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 13:36:49 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/10 12:57:31 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	if (!s)
		return (0);
	substring = (char *)malloc((len + 1) * sizeof(char));
	i = 0;
	if (!substring)
		return (0);
	while (i < len)
	{
		substring[i] = (char)s[i + start];
		i++;
	}
	substring[len] = '\0';
	if (substring)
		return (substring);
	return (0);
}
