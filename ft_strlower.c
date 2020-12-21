/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlower.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 15:55:03 by nhariman      #+#    #+#                 */
/*   Updated: 2020/11/17 17:13:26 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlower(char *str)
{
	int		start;
	char	*newstr;

	start = 0;
	newstr = (char *)malloc((ft_strlen(str) + 1 * sizeof(char)));
	if (!newstr)
		return (NULL);
	while (str[start] != '\0')
	{
		if (ft_isalpha(str[start]))
			newstr[start] = ft_tolower(str[start]);
		start++;
	}
	newstr[start] = '\0';
	return (newstr);
}