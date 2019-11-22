/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/22 11:30:15 by nhariman       #+#    #+#                */
/*   Updated: 2019/11/22 13:55:04 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int		main(void)
{
	char	*haystack;
	char	*needle1;
	char	*needle2;
	char	*needle3;
	char	*needle4;
	char	*needle5;

	haystack = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod";
	needle1 = "Lorem";
	needle2 = "amett";
	needle3 = "";
	needle4 = "pizza";
	needle5 = "sed";
	printf("Testing functions:\n");
	printf("ft_strnstr:\n");
	printf("haystack: %s\n", haystack);
	printf("needle %s: %s\n", needle1, ft_strnstr(haystack, needle1, 30));
	printf("needle %s: %s\n", needle2, ft_strnstr(haystack, needle2, 30));
	printf("needle %s: %s\n", needle3, ft_strnstr(haystack, needle3, 30));
	printf("needle %s: %s\n", needle4, ft_strnstr(haystack, needle4, 30));
	printf("needle %s my function: %s\n", needle5, ft_strnstr(haystack, needle5, 30));
	printf("testing strrchr:\n");
	printf("character: l: %s\n", ft_strrchr(haystack, 'l'));
	printf("character !: %s\n", ft_strrchr(haystack, '!'));
	printf("testing substr\n");
	printf("substring: %s\n", ft_substr(haystack, 10, ft_strlen(haystack)));
	printf("testing strtrim\n");
	printf("trim: %s\n", ft_strtrim("aaaaaabbbbcccdlfkhdfklhaaaaabbbb", "ab"));
	printf("testing strdup:\n");
	printf("%s", ft_strdup("Hello world!"));
	printf("testing strjoin\n");
	printf("first string: %s\n", haystack);
	printf("second string: %s\n", needle4);
	printf("cOMBINE PLS: %s\n", ft_strjoin(haystack, needle4));
	return (0);
}
