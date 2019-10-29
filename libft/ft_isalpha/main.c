/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 15:56:55 by nhariman      #+#    #+#                 */
/*   Updated: 2019/10/29 16:08:09 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalpha(int c);

int	main(void)
{
	int c;

	c = ft_isalpha('b');
	if (c == 1)
		printf("%s", "1");
	else
		printf("%s", "0");
	return (0);
}
