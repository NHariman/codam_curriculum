/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 15:29:14 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/24 17:13:36 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;

	if (!lst)
		return (NULL);
	head = ft_lstnew((*f)(lst->content));
	if (head == NULL)
		return (NULL);
	lst = lst->next;
	current = head;
	while (lst != NULL)
	{
		ft_lstadd_back(&current, ft_lstnew((*f)(lst->content)));
		current = current->next;
		if (current == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (head);
}
