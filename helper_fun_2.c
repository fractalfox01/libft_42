/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_fun_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 10:49:19 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:47:20 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function here are all called from parse_oct function; Contained in parse_1.c
*/

void	octal_assign_1(t_alst *arg, char *padded, char *orig, int neg)
{
	char	*tmp;

	if (arg->info->plus_flag == 1 && neg == 0)
	{
		tmp = ft_strjoin("+", padded);
		arg->info->arg = ft_strjoin(orig, pad_right(arg, tmp));
		ft_strdel(&tmp);
	}
	else
		arg->info->arg = ft_strjoin(orig, pad_right(arg, padded));
}

void	octal_assign_2(t_alst *arg, char *padded, char *orig)
{
	char	*tmp;

	tmp = ft_strjoin("+", padded);
	arg->info->arg = ft_strjoin(orig, pad_left(arg, tmp, 0));
	ft_strdel(&tmp);
}

void	lnglng_oct_helper(t_alst *arg, long long c, int len)
{
	int		zero;
	char	*x;
	char	*s;

	len = ft_strlen(PADDED);
	if (c < 0)
		len--;
	zero = PRECISION - len;
	if (zero >= 0)
	{
		if (c < 0)
			zero++;
		x = ft_strnew(zero);
		ft_memset(x, '0', zero);
		if (c < 0)
			x[0] = '-';
		if (HASH_FLAG == 1)
			s = ft_strjoin(x, ft_strjoin("0", ft_lltoa(ft_lltoo(ft_abs(c)))));
		else
			s = ft_strjoin(x, ft_lltoa(ft_lltoo(ft_abs(c))));
		ft_strdel(&(PADDED));
		PADDED = ft_strdup(s);
		ft_strdel(&x);
		ft_strdel(&s);
	}
}

/*
** helper function for parse_hex function; Contained in parser_1.c
*/

void	hex_helper_1(t_alst *arg, int a)
{
	char	*tmp;

	if (a == 1)
		tmp = ft_strjoin("0X", arg->info->padded);
	else
		tmp = ft_strjoin("0x", arg->info->padded);
	ft_strdel(&(arg->info->padded));
	arg->info->padded = ft_strdup(tmp);
	ft_strdel(&tmp);
}

char	*blank_helper(char *padded)
{
	char	*tmp;

	tmp = ft_strjoin(" ", padded);
	ft_strdel(&padded);
	return (tmp);
}
