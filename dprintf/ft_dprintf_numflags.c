/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dprintf_numflags.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <nhariman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/28 17:34:50 by nhariman      #+#    #+#                 */
/*   Updated: 2020/12/21 18:20:50 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static long			ft_numlen(long n)
{
	long	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void			ft_dpadlen(long n, long *padlen, t_dflag *flags)
{
	if (flags->dot && flags->pre < 0)
	{
		flags->pre = -1;
		flags->dot = 0;
	}
	if (flags->dot && flags->pre == 0 && n == 0)
		*padlen = flags->pad;
	else if (flags->dot && n < 0)
	{
		if (flags->pre < ft_numlen(-n))
			*padlen = flags->pad - ft_numlen(n);
		else
			*padlen = flags->pad - ft_numlen(n) - (flags->pre - ft_numlen(-n));
	}
	else if (flags->dot && n >= 0)
	{
		if (flags->pre < ft_numlen(n))
			*padlen = flags->pad - ft_numlen(n);
		else
			*padlen = flags->pad - ft_numlen(n) - (flags->pre - ft_numlen(n));
	}
	else
		*padlen = flags->pad - ft_numlen(n);
}

static	void		ft_dprint_negative(long *n, int *count, t_dflag *flags)
{
	if (*n < 0)
	{
		pft_putchar_fd('-', flags->fd, count);
		*n = *n * -1;
		if (*count >= 0)
			*count = *count + 1;
	}
}

void				ft_dsigned(long n, int *count, t_dflag *flags)
{
	long padlen;

	padlen = 0;
	ft_dpadlen(n, &padlen, flags);
	if ((!flags->dash && !flags->zero) ||
		(!flags->dash && flags->zero && flags->dot))
		ft_dpad(padlen, count, flags);
	ft_dprint_negative(&n, count, flags);
	if (flags->zero && !flags->dash && flags->pre == -1)
		ft_dpadzero(padlen, count, flags);
	if (flags->dot)
		ft_dpadzero(flags->pre - ft_numlen(n), count, flags);
	if (flags->pre != 0 || (flags->pre == 0 && n != 0))
		ft_dprint_decimal(n, count, flags);
	if (*count < 0)
		return ;
	if (flags->dash)
		ft_dpad(padlen, count, flags);
}

void				ft_dunsigned(unsigned long n, int *count, t_dflag *flags)
{
	long	padlen;

	padlen = 0;
	if (*count < 0)
		return ;
	ft_dpadlen(n, &padlen, flags);
	if ((!flags->dash && !flags->zero) ||
		(!flags->dash && flags->zero && flags->dot))
		ft_dpad(padlen, count, flags);
	if (flags->zero && !flags->dash && flags->pre == -1)
		ft_dpadzero(padlen, count, flags);
	if (flags->dot)
		ft_dpadzero(flags->pre - ft_numlen(n), count, flags);
	if (flags->pre != 0 || (flags->pre == 0 && n != 0))
		ft_dprint_decimal((unsigned long)n, count, flags);
	if (*count < 0)
		return ;
	if (flags->dash)
		ft_dpad(padlen, count, flags);
}
