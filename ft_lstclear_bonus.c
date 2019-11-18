/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 22:36:02 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/18 15:23:34 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	current = *lst;
	if (current == NULL)
		return ;
	while (current != NULL)
	{
		(del)(current->content);
		free(current);
		current = current->next;
	}
	*lst = NULL;
}
