/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_add_arr_back.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/21 18:35:17 by nhariman      #+#    #+#                 */
/*   Updated: 2020/12/21 19:08:45 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char			**ft_add_arr_back(char **arr, char *input)
{
	char	**new_argv;
	int		len;
	int		i;

	len = ft_arrlen(arr) + 1;
	i = 0;
	new_argv = (char **)malloc(sizeof(char *) * (len + 1));
	if (!new_argv)
		return (NULL);
	while (arr[i] != (char *)0)
	{
		new_argv[i] = ft_strdup(arr[i]);
		i++;
	}
	new_argv[i] = ft_strdup(input);
	new_argv[len] = (char *)0;
	return (new_argv);
}
