/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dprintf_num.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/24 17:31:14 by nhariman      #+#    #+#                 */
/*   Updated: 2021/02/12 18:04:47 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void		ft_print_x(int nb, const char c, int *count, t_dflag *flags)
{
	if (c == 'X')
		pft_putchar_fd(nb + 55, flags->fd, count);
	else
		pft_putchar_fd(nb + 87, flags->fd, count);
}

void			ft_dprint_hex(const char c, unsigned long nb, int *count,
				t_dflag *flags)
{
	if (*count < 0)
		return ;
	if (nb >= 10 && nb < 16)
	{
		ft_print_x(nb, c, count, flags);
		if (*count < 0)
			return ;
		*count = *count + 1;
	}
	else if (nb >= 16)
	{
		ft_dprint_hex(c, nb / 16, count, flags);
		ft_dprint_hex(c, nb % 16, count, flags);
	}
	else
	{
		pft_putchar_fd(nb + '0', flags->fd, count);
		if (*count < 0)
			return ;
		*count = *count + 1;
	}
}

void			ft_dprint_decimal(unsigned long n, int *count, t_dflag *flags)
{
	if (*count < 0)
		return ;
	if (n <= 9)
	{
		pft_putchar_fd(n + '0', flags->fd, count);
		if (*count < 0)
			return ;
		*count = *count + 1;
	}
	else if (n > 9)
	{
		ft_dprint_decimal(n / 10, count, flags);
		ft_dprint_decimal(n % 10, count, flags);
	}
}

void			ft_dpad(int n, int *count, t_dflag *flags)
{
	int		i;

	i = 0;
	if (n < 0 || *count < 0)
		return ;
	while (i < n)
	{
		pft_putchar_fd(' ', flags->fd, count);
		if (*count < 0)
			return ;
		i++;
	}
	*count = *count + n;
}

void			ft_dpadzero(int n, int *count, t_dflag *flags)
{
	int		i;

	i = 0;
	if (n < 0 || *count < 0)
		return ;
	while (i < n)
	{
		pft_putchar_fd('0', flags->fd, count);
		if (*count < 0)
			return ;
		i++;
	}
	*count = *count + n;
}
