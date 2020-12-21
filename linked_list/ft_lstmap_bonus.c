/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 15:29:14 by nhariman      #+#    #+#                 */
/*   Updated: 2020/12/21 18:22:30 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;

	if (!lst)
		return (NULL);
	head = ft_lstnew((*f)(lst->content));
	lst = lst->next;
	current = head;
	while (lst != NULL)
	{
		ft_lstadd_back(&current, ft_lstnew((*f)(lst->content)));
		if (head->content == NULL)
		{
			ft_lstclear(&head, (del));
			return (NULL);
		}
		lst = lst->next;
	}
	return (head);
}
