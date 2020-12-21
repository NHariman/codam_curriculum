/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_charjoin.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/21 18:42:05 by nhariman      #+#    #+#                 */
/*   Updated: 2020/12/21 18:42:12 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_charjoin(char *str, char c)
{
	int		len;
	char	*newstr;
	int		i;

	len = ft_strlen(str) + 2;
	newstr = (char *)malloc(sizeof(char) * len);
	i = 0;
	while (str[i] != '\0')
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = c;
	newstr[i + 1] = '\0';
	return (newstr);
}
