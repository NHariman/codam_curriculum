/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   gnl_strjoin.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/21 18:30:29 by nhariman      #+#    #+#                 */
/*   Updated: 2020/12/21 18:30:40 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*gnl_strjoin(char *s1, char *s2)
{
	char		*strduo;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	strduo = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!strduo)
	{
		free(s1);
		return (NULL);
	}
	while (s1 && i < ft_strlen(s1))
	{
		strduo[i] = s1[i];
		i++;
	}
	while (s2 && j < ft_strlen(s2))
	{
		strduo[i + j] = s2[j];
		j++;
	}
	strduo[i + j] = '\0';
	free(s1);
	return (strduo);
}
