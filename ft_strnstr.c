/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 16:31:11 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/05 21:25:47 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*big;
	char	*small;
	size_t	i;
	int		j;

	big = (char *)haystack;
	small = (char *)needle;
	i = 0;
	j = 0;
	if (!needle)
		return ((char *)haystack);
	while (i <= len)
	{
		if (big[i] == small[j])
		{
			i++;
			j++;
		}
		if (small[j] == '\0')
			return (&big[i - j]);
		if (big[i] == '\0' && small[j] != '\0')
			return (0);
		i++;
	}
	return (0);
}
