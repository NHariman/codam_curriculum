/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcasecmp.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 15:46:02 by nhariman      #+#    #+#                 */
/*   Updated: 2020/11/17 16:58:16 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strcasecmp(char *s1, char *s2)
{
	char	*str1;
	char	*str2;
	int		ret;

	str1 = ft_strlower(s1);
	str2 = ft_strlower(s2);
	ret = ft_strcmp(str1, str2);
	free(str1);
	free(str2);
	return (ret);
}
