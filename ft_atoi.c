/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 15:55:47 by nhariman      #+#    #+#                 */
/*   Updated: 2020/07/18 00:07:48 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	while (ft_isdigit(str[i]) && str[i] != '\0')
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
