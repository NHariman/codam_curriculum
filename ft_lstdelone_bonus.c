/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdelone_bonus.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 22:49:02 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/14 23:01:56 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*delnode;

	delnode = *lst;
	if (delnode == NULL)
		return (NULL);
	while (delnode->content != lst)
		delnode = delnode->content;
	delnode->content = del(delnode);
}
