/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 13:36:57 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/10 14:49:47 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*strduo;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (s1 && !s2)
		return ((char *)s1);
	if (!s1 && s2)
		return ((char *)s2);
	strduo = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (!strduo)
		return (0);
	while (i <= (ft_strlen(s1) - 1))
	{
		strduo[i] = (char)s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		strduo[i + j] = (char)s2[j];
		j++;
	}
	strduo[i + j] = '\0';
	return (strduo);
}
