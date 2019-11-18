/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/18 15:29:14 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/18 16:10:57 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		len;
	t_list	*newlist;

	if (!lst)
		return (NULL);
	len = ft_lstsize(lst);
	newlist = (t_list *)malloc(len * sizeof(t_list));
	if (!newlist)
		return (NULL);
	while (lst != NULL)
	{
		newlist->content = (*f)(lst->content);
		newlist = newlist->next;
		lst = lst->next;
	}
	newlist->next = NULL;
	(del)(lst);
	free(lst);
	return (newlist);
}
