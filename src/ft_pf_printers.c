/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_printers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:04:42 by dpalmer           #+#    #+#             */
/*   Updated: 2022/11/17 15:30:38 by dpalmer          ###   ########.fr       */
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
