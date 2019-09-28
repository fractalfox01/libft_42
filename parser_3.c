/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 16:06:18 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:48:08 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*int_helper(t_alst *arg, char *padded, int c)
{
	int		len;
	int		zero;

	len = ft_strlen(padded);
	if (c < 0)
		len--;
	zero = PRECISION - len;
	if (zero >= 0)
	{
		if (c < 0)
			zero++;
		arg->info->tmp1 = ft_strnew(zero);
		ft_memset(arg->info->tmp1, '0', zero);
		if (c < 0)
		{
			arg->info->tmp1[0] = '-';
			c = ft_abs(c);
		}
		arg->info->tmp2 = ft_strjoin(arg->info->tmp1, ft_itoa(c));
		ft_strdel(&padded);
		padded = ft_strdup(arg->info->tmp2);
		ft_strdel(&(arg->info->tmp2));
		ft_strdel(&arg->info->tmp1);
	}
	return (padded);
}

static char	*lnglng_helper(t_alst *arg, char *padded, long long c)
{
	int	len;
	int	zero;

	len = ft_strlen(padded);
	if (c < 0)
		len--;
	zero = PRECISION - (int)ft_strlen(padded);
	if (zero >= 0)
	{
		if (c < 0)
			zero++;
		arg->info->tmp1 = ft_strnew(zero);
		ft_memset(arg->info->tmp1, '0', zero);
		if (c < 0)
		{
			arg->info->tmp1[0] = '-';
			c *= -1;
		}
		arg->info->tmp2 = ft_strjoin(arg->info->tmp1, ft_lltoa(c));
		ft_strdel(&padded);
		padded = ft_strdup(arg->info->tmp2);
		ft_strdel(&arg->info->tmp1);
		ft_strdel(&arg->info->tmp2);
	}
	return (padded);
}

char		*short_helper(t_alst *arg, char *padded, short c)
{
	int		len;
	int		zero;

	len = ft_strlen(padded);
	if (c < 0)
		len--;
	zero = PRECISION - len;
	if (zero >= 0)
	{
		if (c < 0)
			zero++;
		arg->info->tmp1 = ft_strnew(zero);
		ft_memset(arg->info->tmp1, '0', zero);
		if (c < 0)
		{
			arg->info->tmp1[0] = '-';
			c = ft_abs(c);
		}
		arg->info->tmp2 = ft_strjoin(arg->info->tmp1, ft_stoa(c));
		ft_strdel(&padded);
		padded = ft_strdup(arg->info->tmp2);
		ft_strdel(&arg->info->tmp1);
		ft_strdel(&arg->info->tmp2);
	}
	return (padded);
}

int			parse_int(t_glb *glb, t_alst *arg, char *orig)
{
	if (LENMOD[0] == 'l' && LENMOD[1] == '\0')
		parse_long(glb, arg, orig);
	else if (LENMOD[0] == 'l' && LENMOD[1] == 'l')
		parse_longlong(glb, arg, orig);
	else if (LENMOD[0] == 'h' && LENMOD[1] == '\0')
		parse_short(glb, arg, orig);
	else if (LENMOD[0] == 'h' && LENMOD[1] == 'h')
		parse_s_short(glb, arg, orig);
	else
		parse_int_normal(glb, arg, orig);
	return (0);
}

int			parse_longlong(t_glb *glb, t_alst *arg, char *orig)
{
	long long	c;
	char		*padded;

	T_COUNT += 1;
	c = va_arg(glb->ap, long long);
	if (c < 0)
		NEGATIVE = 1;
	if (int_norm_helper_1(arg, orig, c))
		return (0);
	if (PRECISION > FIELDWIDTH)
		FIELDWIDTH = PRECISION;
	padded = ft_lltoa(c);
	if (PRECISION > 0)
		padded = lnglng_helper(arg, &*padded, c);
	int_norm_helper_2(arg, orig, padded);
	arg->next = new_list();
	NEXT_ID = (CUR_ID + 1);
	return (0);
}
