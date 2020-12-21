/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf_err.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/13 12:22:05 by nhariman      #+#    #+#                 */
/*   Updated: 2020/12/21 18:19:12 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static void			ft_format(const char c, va_list argp,
								int *count, t_flag *flags)
{
	if (c == '\0')
		return ;
	else if (c == '%')
		ft_print_char(c, count, flags);
	else if (c == 'c')
		ft_print_char(va_arg(argp, int), count, flags);
	else if (c == 'p')
		ft_ptr((unsigned long)va_arg(argp, void *), count, flags);
	else if (c == 's')
		ft_print_str(va_arg(argp, char *), count, flags);
	else if (ft_strchr("di", c))
		ft_signed((long)va_arg(argp, int), count, flags);
	else if (c == 'u')
		ft_unsigned((unsigned int)va_arg(argp, int), count, flags);
	else if (ft_strchr("xX", c))
		ft_hex(c, (unsigned int)va_arg(argp, int), count, flags);
}

static void			ft_reset_flags(t_flag *flags)
{
	flags->dash = 0;
	flags->zero = 0;
	flags->dot = 0;
	flags->pre = -1;
	flags->pad = -1;
}

static void			ft_vprintf(const char *format, va_list argp, int *count)
{
	int			i;
	t_flag		flags;

	i = 0;
	while (format[i] != '\0')
	{
		ft_reset_flags(&flags);
		if (format[i] == '%')
		{
			i++;
			ft_flags(format, &i, &flags);
			ft_width(format, &i, argp, &flags);
			ft_precision(format, &i, argp, &flags);
			ft_format(format[i], argp, count, &flags);
			if (format[i] == '\0')
				return ;
		}
		else
			ft_print_char(format[i], count, &flags);
		if (*count < 0)
			return ;
		i++;
	}
}

int					ft_printf_err(const char *format, ...)
{
	va_list		argp;
	int			count;

	count = 0;
	va_start(argp, format);
	ft_vprintf(format, argp, &count);
	va_end(argp);
	return (count);
}
