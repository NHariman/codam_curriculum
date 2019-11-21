/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 13:36:05 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/21 13:23:14 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_arraycount(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
		else
			i++;
	}
	return (count);
}

static char	**ft_deletearray(char **array, size_t len)
{
	while (len >= 0)
	{
		free(array[len]);
		len--;
	}
	return (array);
}

static char	**ft_createarray(char **array, char const *s, char c)
{
	size_t		i;
	size_t		len;
	size_t		j;

	i = 0;
	j = 0;
	while (s[i])
		if (s[i] != c)
		{
			len = 0;
			while (s[i] != c && s[i])
			{
				i++;
				len++;
			}
			array[j] = ft_substr(s, i - len, len);
			if (!array[j])
				return (ft_deletearray(array, j));
			j++;
		}
		else
			i++;
	array[j] = 0;
	return (array);
}

char		**ft_split(char const *s, char c)
{
	char		**chararray;

	if (!s)
		return (NULL);
	chararray = (char **)malloc((ft_arraycount(s, c) + 1) * sizeof(char *));
	if (!chararray)
		return (NULL);
	chararray = ft_createarray(chararray, s, c);
	if (!chararray)
	{
		free(chararray);
		return (NULL);
	}
	return (chararray);
}
