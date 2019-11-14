/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/08 13:36:19 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/14 16:59:46 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static size_t	ft_size(int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char		*ft_fillnum(int n, char *num, size_t size)
{
	size_t	i;
	int		number;

	i = 1;
	if (n < 0)
	{
		num[0] = '-';
		n = -n;
		num[size - i] = '\0';
		i++;
	}
	else
		num[size] = '\0';
	while (i <= size && n != 0)
	{
		number = n;
		num[size - i] = ((n % 10) + '0');
		n = number / 10;
		i++;
	}
	return (num);
}

char			*ft_itoa(int n)
{
	char	*number;
	size_t	size;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		size = ft_size(n) + 1;
	else
		size = ft_size(n);
	number = (char *)malloc(size * sizeof(char));
	if (!number)
		return (0);
	number = ft_fillnum(n, number, size);
	return (number);
}
