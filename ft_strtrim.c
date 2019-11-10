/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 13:37:06 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/10 17:14:05 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*trim;

	if (!s1)
		return (0);
	i = 0;
	j = ft_strlen(s1);
	k = 0;
	if (!set)
		return ((char *)s1);
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	if (i == j)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[j - 1]) && j != 0)
		j--;
	trim = (char *)malloc((j - i + 1) * sizeof(char));
	if (!trim)
		return (0);
	trim = ft_substr(s1, i, j - i);
	return (trim);
}
