/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 13:37:06 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/25 22:02:39 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	if (!s1)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	if (set == '\0')
		return ((char *)s1);
	while (ft_strchr(set, s1[start]) && s1[start] != '\0')
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end - 1]) && end != 0)
		end--;
	trim = (char *)malloc((end - start + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	trim = ft_substr(s1, start, end - start);
	return (trim);
}
