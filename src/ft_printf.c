/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:13:11 by dpalmer           #+#    #+#             */
/*   Updated: 2022/11/17 15:47:10 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_pf_args(va_list ap, char c, int count)
{
	char	*temp;
	
	if (c == '%')
		count += ft_pf_char('%');
	else if (c == 'c')
		count += ft_pf_char(va_arg(ap, int));
	else if (c == 's')
		count += ft_pf_str(va_arg(ap, char *));
	
}

static int	ft_pf_parse(char *str, va_list ap)
{
	int	count;
	
	count = 0;
	while (*str)
	{
		
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;
	char	*str;

	if (!format || *format == '\0')
		return (0);
	str = ft_strdup(format);
	if (!str)
		return (0);
	va_start(ap, format);
	count = ft_pf_parse(str, ap);
	va_end(ap);
	free (str);
	return (count);
}
