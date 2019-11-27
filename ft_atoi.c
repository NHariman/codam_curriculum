/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 15:55:47 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/27 23:15:22 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_iswhitespaces(const char *str)
{
	long	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int			ft_atoi(const char *str)
{
	long	number;
	int		negative;
	long	i;

	number = 0;
	negative = 1;
	i = ft_iswhitespaces(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
		if (number > 9223372036854775807 && negative == 1)
			return (0);
		if (number > 9223372036854775807 && negative == -1)
			return (-1);
	}
	return (number * negative);
}
