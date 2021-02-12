/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_extras.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/12 18:08:27 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/12 18:17:16 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		gnl_fill_line(t_gnl gnl, char *tmp)
{
	if (!tmp)
		gnl.line_read = NULL;
	else
		ft_strdup(tmp);
}

int			ret_fill_line(int newline, size_t remainder)
{
	if (newline != -1 && remainder == 0)
		return (1);
	else
		return (0);
}

int			ret_gnl(int newline, char *leftover, int ret)
{
	if (newline != -1 && leftover == NULL)
		return (-1);
	else
		return (ret);
}