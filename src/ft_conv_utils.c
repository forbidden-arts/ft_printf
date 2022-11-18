/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:26:19 by dpalmer           #+#    #+#             */
/*   Updated: 2022/11/17 15:37:53 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// TODO: Need a multibase conversion for LONG INT to String

int	ft_count_digits(long num, int base)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= base;
		i++;
	}
	return (i);
}

static char	ft_n_base(int n)
{
	if (n >= 0 && n <= 9)
		return ((char)(n + 48));
	return ((char)(n + 87));
}

char	*ft_ltoa_b(long num, int base)
{
	int				i;
	char			*result;
	unsigned long	num_p;

	if (base < 2 || base > 36)
		return (NULL);
	if (!num)
		return ("0");
	result = ft_calloc(ft_count_digits(num, base) + 1, sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	num_p = (unsigned long)num;
	while (num_p)
	{
		result[i++] = ft_n_base(num_p % base);
		num_p /= base;
	}
	return (ft_strrev(result));
}

char	*ft_itoa_b(int num, int base)
{
	int				i;
	char			*result;
	unsigned int	num_p;

	if (base < 2 || base > 36)
		return (NULL);
	if (!num)
		return ("0");
	result = ft_calloc(ft_count_digits(num, base) + 1, sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	num_p = (unsigned int)num;
	while (num_p)
	{
		result[i++] = ft_n_base(num_p % base);
		num_p /= base;
	}
	return (ft_strrev(result));
}