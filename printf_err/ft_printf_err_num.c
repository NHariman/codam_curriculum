/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_err_num.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 17:31:14 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/12 18:01:45 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void		ft_print_x(int nb, const char c, int *count)
{
	if (c == 'X')
		pft_putchar_fd(nb + 55, 2, count);
	else
		pft_putchar_fd(nb + 87, 2, count);
}

void			ft_print_hex(const char c, unsigned long nb, int *count)
{
	if (*count < 0)
		return ;
	if (nb >= 10 && nb < 16)
	{
		ft_print_x(nb, c, count);
		if (*count < 0)
			return ;
		*count = *count + 1;
	}
	else if (nb >= 16)
	{
		ft_print_hex(c, nb / 16, count);
		ft_print_hex(c, nb % 16, count);
	}
	else
	{
		pft_putchar_fd(nb + '0', 2, count);
		if (*count < 0)
			return ;
		*count = *count + 1;
	}
}

void			ft_print_decimal(unsigned long n, int *count)
{
	if (*count < 0)
		return ;
	if (n <= 9)
	{
		pft_putchar_fd(n + '0', 2, count);
		if (*count < 0)
			return ;
		*count = *count + 1;
	}
	else if (n > 9)
	{
		ft_print_decimal(n / 10, count);
		ft_print_decimal(n % 10, count);
	}
}

void			ft_pad(int n, int *count)
{
	int		i;

	i = 0;
	if (n < 0 || *count < 0)
		return ;
	while (i < n)
	{
		pft_putchar_fd(' ', 2, count);
		if (*count < 0)
			return ;
		i++;
	}
	*count = *count + n;
}

void			ft_padzero(int n, int *count)
{
	int		i;

	i = 0;
	if (n < 0 || *count < 0)
		return ;
	while (i < n)
	{
		pft_putchar_fd('0', 2, count);
		if (*count < 0)
			return ;
		i++;
	}
	*count = *count + n;
}
