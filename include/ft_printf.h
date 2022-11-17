/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:43:28 by dpalmer           #+#    #+#             */
/*   Updated: 2022/11/17 13:58:24 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

// Struct for Flags
typedef struct s_flag
{
	int	minus;
	int	zero;
	int	dot;
	int	hash;
	int	space;
	int	plus;
}		t_flag;

int		ft_printf(const char *format, ...);

// Utility Funcs
int		ft_count_digits(long num, int base);
char	*ft_itoa_b(int num, int base);

#endif
