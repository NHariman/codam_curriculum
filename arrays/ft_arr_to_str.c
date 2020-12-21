/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_arr_to_str.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/21 18:50:41 by nhariman      #+#    #+#                 */
/*   Updated: 2020/12/21 18:50:55 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			*ft_make_str(char **arr)
{
	int		i;
	char	*new_str;
	char	*tmp;

	i = 0;
	new_str = ft_strdup(arr[0]);
	while (arr[i + 1] != (char *)0)
	{
		tmp = gnl_strjoin(new_str, arr[i + 1]);
		new_str = tmp;
		i++;
	}
	if (i > 0)
		new_str = tmp;
	return (new_str);
}
