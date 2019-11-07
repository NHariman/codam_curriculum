/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 15:55:47 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/07 21:45:15 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	long	number;
	int		negative;
	int		i;

	number = 0;
	negative = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
	str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	if (negative != 0)
		number = -number;
	return (number);
}
