/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 13:36:49 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/25 21:51:18 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	if (!s)
		return (0);
	if (ft_strlen(s) < (size_t)start)
		return (ft_strdup(""));
	substring = (char *)malloc(((ft_strlen(s) - start) + 1) * sizeof(char));
	i = 0;
	if (!substring)
		return (NULL);
	while (i < len && s[start + i])
	{
		substring[i] = (char)s[i + start];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
