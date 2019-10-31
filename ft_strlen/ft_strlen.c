/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 14:07:26 by nhariman       #+#    #+#                */
/*   Updated: 2019/10/29 16:48:30 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlen(const char *s)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
