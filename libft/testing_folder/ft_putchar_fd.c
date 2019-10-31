/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 20:56:33 by nhariman       #+#    #+#                */
/*   Updated: 2019/10/31 17:33:22 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0 || fd > 2)
	{
		ft_putendl_fd("Error: Please enter a valid file descriptor.", 1);
		return (0);
	}
	write(fd, &c, 1);
}
