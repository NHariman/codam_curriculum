/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_add_arr_front.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/21 18:36:50 by nhariman      #+#    #+#                 */
/*   Updated: 2020/12/21 19:08:52 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			**ft_add_arr_front(char **arr, char *input)
{
	char	**new_argv;
	int		len;
	int		i;

	len = ft_arrlen(arr) + 1;
	if (len == 0)
		return (NULL);
	i = 0;
	new_argv = (char **)malloc(sizeof(char *) * (len + 1));
	if (!new_argv)
		return (NULL);
	new_argv[i] = ft_strdup(input);
	free(input);
	while (arr[i] != (char *)0)
	{
		new_argv[i + 1] = ft_strdup(arr[i]);
		i++;
	}
	new_argv[i + 1] = (char *)0;
	return (new_argv);
}
