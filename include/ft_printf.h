/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 08:43:28 by dpalmer           #+#    #+#             */
/*   Updated: 2022/11/17 15:30:25 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

// Struct for Flags - REVISIT LATER
// typedef struct s_flag
// {
// 	int	minus;
// 	int	zero;
// 	int	dot;
// 	int	hash;
// 	int	space;
// 	int	plus;
// }		t_flag;

int		ft_printf(const char *format, ...);

// Utility Funcs
int		ft_count_digits(long num, int base);
char	*ft_ltoa_b(long num, int base);
int		ft_pf_char(char c);
int		ft_pf_str(char *str);

#endif
