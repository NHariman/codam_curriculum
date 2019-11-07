/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 16:31:11 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/07 17:22:00 by nhariman      ########   odam.nl         */
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
	if (*needle == '\0' || len == 0)
		return ((char *)haystack);
	while (i < len)
	{
		if (small[j] == '\0')
			return (&big[i - j]);
		if (big[i] == small[j])
		{
			j++;
			if (small[j] == '\0')
				return (&big[i - j + 1]);
		}
		i++;
	}
	return (0);
}
