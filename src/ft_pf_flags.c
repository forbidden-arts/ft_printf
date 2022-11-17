/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:39:47 by dpalmer           #+#    #+#             */
/*   Updated: 2022/11/17 13:44:30 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flag	ft_init_flag(void)
{
	t_flag	flag;

	flag.dot = 0;
	flag.hash = 0;
	flag.minus = 0;
	flag.plus = 0;
	flag.space = 0;
	flag.zero = 0;
}
