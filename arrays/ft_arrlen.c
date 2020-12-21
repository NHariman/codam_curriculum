/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_arrlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/21 18:37:13 by nhariman      #+#    #+#                 */
/*   Updated: 2020/12/21 18:37:24 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int				ft_arrlen(char **arr)
{
	int i;

	i = 0;
	while (arr[i] != (char *)0)
		i++;
	return (i);
}
