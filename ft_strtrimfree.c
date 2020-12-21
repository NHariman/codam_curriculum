/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrimfree.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/21 18:30:06 by nhariman      #+#    #+#                 */
/*   Updated: 2020/12/21 18:30:15 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrimfree(char *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	if (!s1)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	if (set == NULL || set[0] == '\0')
		return ((char *)s1);
	while (ft_strchr(set, s1[start]) && s1[start] != '\0')
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end - 1]) && end != 0)
		end--;
	trim = ft_substr(s1, start, end - start);
	free(s1);
	return (trim);
}
