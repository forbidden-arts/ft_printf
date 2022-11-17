/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:13:11 by dpalmer           #+#    #+#             */
/*   Updated: 2022/11/17 14:00:56 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_pf_parse(char *str, va_list ap)
{
	
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
	count = 0;
	va_start(ap, format);
	count = ft_pf_parse(str, ap);
	va_end(ap);
	free (str);
	return (count);
}
