/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 11:54:02 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:48:20 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*long_helper(t_alst *arg, char *padded, long c)
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
		arg->info->tmp2 = ft_strjoin(arg->info->tmp1, ft_ltoa(c));
		ft_strdel(&padded);
		padded = ft_strdup(arg->info->tmp2);
		ft_strdel(&arg->info->tmp1);
		ft_strdel(&arg->info->tmp2);
	}
	return (padded);
}

static int	p_long_helper_1(t_alst *arg, char *orig, char *padded, long c)
{
	if (c == 0)
	{
		padded = ft_strdup("0");
		if (PRECISION > FIELDWIDTH)
			FIELDWIDTH = PRECISION;
		if (PLUS_FLAG == 1)
		{
			if (PRECISION > 0)
				padded = long_helper(arg, &*padded, c);
			ARG = ft_strjoin(orig, pad_left(arg, ft_strjoin("+", padded), 1));
		}
		else if (MINUS_FLAG == 1)
		{
			if (PRECISION > 0)
				padded = long_helper(arg, &*padded, c);
			ARG = ft_strjoin(orig, pad_right(arg, ft_strjoin("-", padded)));
		}
		else
			ARG = ft_strjoin(orig, pad_left(arg, padded, 1));
		arg->next = new_list();
		NEXT_ID = (CUR_ID + 1);
		ft_strdel(&padded);
	}
	return (0);
}

static void	p_long_helper_2(t_alst *arg, char *orig, char *padded)
{
	char *tmp;

	if (MINUS_FLAG == 1)
	{
		if (PLUS_FLAG == 1 && NEGATIVE == 0)
		{
			tmp = ft_strjoin("+", padded);
			ARG = ft_strjoin(orig, pad_right(arg, tmp));
			ft_strdel(&tmp);
		}
		else
			ARG = ft_strjoin(orig, pad_right(arg, padded));
	}
	else if (PLUS_FLAG == 1 && NEGATIVE == 0)
	{
		tmp = ft_strjoin("+", padded);
		ARG = ft_strjoin(orig, pad_left(arg, tmp, 1));
		ft_strdel(&tmp);
	}
	else
		ARG = ft_strjoin(orig, pad_left(arg, padded, 1));
}

static int	pl_helper(t_alst *arg, long c, char *orig, char *padded)
{
	if (c == 0)
		return (p_long_helper_1(arg, orig, padded, c));
	if (PRECISION > FIELDWIDTH)
		FIELDWIDTH = PRECISION;
	return (-42);
}

int			parse_long(t_glb *glb, t_alst *arg, char *orig)
{
	long	c;
	char	*padded;

	padded = PF_NULL;
	T_COUNT += 1;
	c = va_arg(glb->ap, long);
	if (c < 0)
		NEGATIVE = 1;
	if (c == 0 && BLANK == 1)
	{
		ARG = ft_strjoin(orig, "");
		arg->next = new_list();
		NEXT_ID = (CUR_ID + 1);
		return (0);
	}
	if (pl_helper(arg, c, orig, padded) == 0)
		return (0);
	padded = ft_ltoa(c);
	if (PRECISION > 0)
		padded = long_helper(arg, &*padded, c);
	p_long_helper_2(arg, orig, padded);
	arg->next = new_list();
	NEXT_ID = (CUR_ID + 1);
	return (0);
}
