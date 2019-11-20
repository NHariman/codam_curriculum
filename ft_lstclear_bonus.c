/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/14 22:36:02 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/20 16:12:35 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*temp;

	current = *lst;
	if (current == NULL)
		return ;
	while (current != NULL)
	{
		temp = current->next;
		(del)(current->content);
		free(current);
		current = temp;
	}
	*lst = NULL;
}
