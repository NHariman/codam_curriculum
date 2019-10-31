/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 16:39:10 by nhariman       #+#    #+#                */
/*   Updated: 2019/10/28 17:50:08 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	main(void)
{
	const char *str;
	const char *str2;
	const char *str3;
	const char *str4;
	const char *str5;
	const char *str6;

	int result;
	int result2;
	int result3;
	int result4;
	int result5;
	int result6;

	str = "12";
	str2 = "-12";
	str3 = "                 5948 fdfdf";
	str4 = "   12";
	str5 = "           \n  \t -12";
	str6 = " a";

	result = ft_atoi(str);
	result2 = ft_atoi(str2);
	result3 = ft_atoi(str3);
	result4 = ft_atoi(str4);
	result5 = ft_atoi(str5);
	result6 = ft_atoi(str6);

	printf("%s", "atoi using: 12:\n");
	printf("%d", result);
	printf("%s", "\natoi using:-12:\n");
	printf("%d", result2);
	printf("%s", "\natoi using:                  5948 fdfdf:\n");
	printf("%d", result3);
	printf("%s", "\n   12:\n");
	printf("%d", result4);
	printf("%s", "\n           \n  \t -12:\n");
	printf("%d", result5);
	printf("%s", "\n a:\n");
	printf("%d", result6);
	printf("%s", "\n using actual atoi \n");
	printf("%d", atoi(" -a5"));
	return (0);
}
