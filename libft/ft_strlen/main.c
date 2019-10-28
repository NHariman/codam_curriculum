/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 14:38:22 by nhariman       #+#    #+#                */
/*   Updated: 2019/10/28 15:11:00 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(const char *s);

int	main(void)
{
	const char *s;
	int result;

	s = "Codam";
	result = 0;
	result = ft_strlen(s);
	/* test ft_strlen */
	printf("%s", "Testing ft_strlen, used word Codam\n");
	printf("%d", result);
	return (0);
}
