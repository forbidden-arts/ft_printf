/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_printers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:04:42 by dpalmer           #+#    #+#             */
/*   Updated: 2022/11/18 11:25:33 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pf_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_pf_str(char *str)
{
	int	count;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	count = ft_strlen(str);
	write(1, str, count);
	return (count);
}

int	ft_pf_int(int i)
{
	int		count;
	char	*str;

	str = ft_itoa(i);
	count = ft_pf_str(str);
	free (str);
	return (count);
}

int	ft_pf_base(unsigned long ul, int base, int upper)
{
	int		count;
	char	*str;

	str = ft_ltoa_b(ul, base);
	if (upper)
	{
		while (*str)
		{
			*str = ft_toupper(*str);
			str++;
		}
	}
	count = ft_pf_str(str);
	free (str);
	return (count);
}

int	ft_pf_ptr(unsigned long ul)
{
	int		count;

	write (1, "0x", 2);
	count = ft_pf_base(ul, 16, 0);
	return (count + 2);
}
