/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 13:36:05 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/10 18:46:19 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**chararray;
	int		i;
	int		lasti;
	int		j;
	int		count;

	i = 0;
	lasti = 0;
	j = 0;
	count = 0;
	if (!s)
		return (0);
	if (i = ft_strlen(s))
		return (*ft_stdrup(*ft_strdup("")));
	while (*s != '\0')
	{
		if (*s != c)
		{
			while (*s != c)
				s++;
			count++;
		}
		s++;
	}
	chararray = (char **)malloc(count * sizeof(char *));
	if (!chararray)
		return (0);
	while (j < count)
	{
		while (s[i] != '\0')
		{
			while (s[i] != c)
				i++;
			*chararray = (char *)malloc((lasti - i + 1) * sizeof(char));
			if (!chararray)
				return (0);
			*chararray = ft_substr(s, lasti, i - lasti);
			free(*chararray);
			lasti = i + 1;
			i++;
		}
		j++;
	}
	*chararray[count] = '\0';
	return (chararray);
}
