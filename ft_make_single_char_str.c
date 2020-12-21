/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_make_single_char_str.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/21 18:31:04 by nhariman      #+#    #+#                 */
/*   Updated: 2020/12/21 19:29:39 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_make_single_char_str(char c)
{
	char *num;

	num = (char *)malloc(sizeof(char) * 2);
	if (!num)
		return (NULL);
	num[0] = c;
	num[1] = '\0';
	return (num);
}
