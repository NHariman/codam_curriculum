/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dprintf.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/13 12:22:05 by nhariman      #+#    #+#                 */
/*   Updated: 2020/12/21 18:20:58 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void			ft_dformat(const char c, va_list argp,
								int *count, t_dflag *flags)
{
	if (c == '\0')
		return ;
	else if (c == '%')
		ft_dprint_char(c, count, flags);
	else if (c == 'c')
		ft_dprint_char(va_arg(argp, int), count, flags);
	else if (c == 'p')
		ft_dptr((unsigned long)va_arg(argp, void *), count, flags);
	else if (c == 's')
		ft_dprint_str(va_arg(argp, char *), count, flags);
	else if (ft_strchr("di", c))
		ft_dsigned((long)va_arg(argp, int), count, flags);
	else if (c == 'u')
		ft_dunsigned((unsigned int)va_arg(argp, int), count, flags);
	else if (ft_strchr("xX", c))
		ft_dhex(c, (unsigned int)va_arg(argp, int), count, flags);
}

static void			ft_reset_dflags(t_dflag *flags, int fd)
{
	flags->dash = 0;
	flags->zero = 0;
	flags->dot = 0;
	flags->pre = -1;
	flags->pad = -1;
	flags->fd = fd;
}

static void			ft_dvprintf(int fd, const char *format, va_list argp, int *count)
{
	int			i;
	t_dflag		flags;

	i = 0;
	while (format[i] != '\0')
	{
		ft_reset_dflags(&flags, fd);
		if (format[i] == '%')
		{
			i++;
			ft_dflags(format, &i, &flags);
			ft_dwidth(format, &i, argp, &flags);
			ft_dprecision(format, &i, argp, &flags);
			ft_dformat(format[i], argp, count, &flags);
			if (format[i] == '\0')
				return ;
		}
		else
			ft_dprint_char(format[i], count, &flags);
		if (*count < 0)
			return ;
		i++;
	}
}

int					ft_dprintf(int fd, const char *format, ...)
{
	va_list		argp;
	int			count;

	count = 0;
	va_start(argp, format);
	ft_dvprintf(fd, format, argp, &count);
	va_end(argp);
	return (count);
}
