/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dprintf_hexflags.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/03/02 18:38:45 by nhariman      #+#    #+#                 */
/*   Updated: 2020/12/21 18:20:42 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static long			ft_hexlen(unsigned long n)
{
	long		len;

	len = 1;
	while (n >= 16)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

static void			ft_hexpadlen(unsigned long n, long *padlen, t_dflag *flags)
{
	if (flags->dot && flags->pre < 0)
	{
		flags->pre = -1;
		flags->dot = 0;
	}
	if (flags->dot && flags->pre <= 0 && n == 0)
		*padlen = flags->pad;
	else if (flags->dot)
	{
		if (flags->pre < ft_hexlen(-n))
			*padlen = flags->pad - ft_hexlen(n);
		else
			*padlen = flags->pad - ft_hexlen(n) - (flags->pre - ft_hexlen(-n));
	}
	else if (flags->dot)
	{
		if (flags->pre < ft_hexlen(n))
			*padlen = flags->pad - ft_hexlen(n);
		else
			*padlen = flags->pad - ft_hexlen(n) - (flags->pre - ft_hexlen(n));
	}
	else
		*padlen = flags->pad - ft_hexlen(n);
}

void				ft_dhex(char c, unsigned long n, int *count, t_dflag *flags)
{
	long	padlen;

	padlen = 0;
	ft_hexpadlen(n, &padlen, flags);
	if ((!flags->dash && !flags->zero) ||
		(!flags->dash && flags->zero && flags->dot))
		ft_dpad(padlen, count, flags);
	if (flags->zero && !flags->dash && flags->pre == -1)
		ft_dpadzero(padlen, count, flags);
	if (flags->dot)
		ft_dpadzero(flags->pre - ft_hexlen(n), count, flags);
	if (flags->pre != 0 || (flags->pre == 0 && n != 0))
		ft_dprint_hex(c, (unsigned long)n, count, flags);
	if (*count < 0)
		return ;
	if (flags->dash)
		ft_dpad(padlen, count, flags);
}

void				ft_dptr(unsigned long n, int *count, t_dflag *flags)
{
	long	padlen;

	padlen = 0;
	ft_hexpadlen(n, &padlen, flags);
	if ((!flags->dash && !flags->zero) ||
		(!flags->dash && flags->zero && flags->dot))
		ft_dpad(padlen - 2, count, flags);
	if (flags->zero && !flags->dash && flags->pre == -1)
		ft_dpadzero(padlen, count, flags);
	pft_putstr_fd("0x", flags->fd, count);
	if (*count < 0)
		return ;
	*count = *count + ft_strlen("0x");
	if (flags->dot)
		ft_dpadzero(flags->pre - ft_hexlen(n), count, flags);
	if (flags->pre != 0 || (flags->pre == 0 && n != 0))
		ft_dprint_hex('p', (unsigned long)n, count, flags);
	if (*count < 0)
		return ;
	if (flags->dash)
		ft_dpad(padlen - 2, count, flags);
}
