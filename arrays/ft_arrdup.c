/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_arrdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/21 19:08:10 by nhariman      #+#    #+#                 */
/*   Updated: 2020/12/21 19:08:26 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_arrdup(char **arr)
{
	int		len;
	char	**newarr;
	int		i;

	i = 0;
	len = ft_arrlen(arr);
	newarr = (char **)malloc(sizeof(char *) * (len + 1));
	if (!newarr)
		return (NULL);
	while (arr[i] != (char *)0)
	{
		newarr[i] = ft_strdup(arr[i]);
		i++;
	}
	newarr[i] = (char *)0;
	return (newarr);
}
