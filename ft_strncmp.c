/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 17:06:48 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/01 18:30:07 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i <= n)
	{
		if (str1[i] != str2[i])
			return (str1 - str2);
		if (str1[i] == '\0' || str2[i] == '\0')
			return (str1 - str2);
		i++;
	}
	return (0);
}
