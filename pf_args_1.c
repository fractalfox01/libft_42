/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_args_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:46:48 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:48:44 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_alst		*get_arg(t_glb *glb)
{
	t_alst *arg;

	arg = glb->args;
	while (CUR_ID < T_COUNT)
	{
		arg = arg->next;
	}
	return (arg);
}

static void	assign_flt(t_alst *arg, int neg, char *padded, char *orig)
{
	char *tmp;

	if (MINUS_FLAG == 1)
	{
		if (PLUS_FLAG == 1 && neg == 0)
		{
			tmp = ft_strjoin("+", padded);
			ARG = ft_strjoin(orig, pad_right(arg, tmp));
			ft_strdel(&tmp);
		}
		else
			ARG = ft_strjoin(orig, pad_right(arg, padded));
	}
	else if (PLUS_FLAG == 1 && neg == 0)
	{
		tmp = ft_strjoin("+", padded);
		ARG = ft_strjoin(orig, pad_left(arg, tmp, 0));
		ft_strdel(&tmp);
	}
	else
		ARG = ft_strjoin(orig, pad_left(arg, padded, 0));
}

int			parse_long_float(t_glb *glb, t_alst *arg, char *orig)
{
	char		*padded;
	long double	n;
	int			b;
	int			neg;

	neg = 0;
	n = 0;
	b = 0;
	if (glb && arg && orig)
	{
		n = va_arg(glb->ap, long double);
		b = PRECISION;
		if (b == 0)
			b = 6;
		if (n < 0)
			neg = 1;
		padded = ft_lftoa(n, b);
		assign_flt(arg, neg, padded, orig);
		glb->total += 1;
		arg->next = new_list();
		NEXT_ID = CUR_ID + 1;
	}
	return (0);
}

int			parse_norm_float(t_glb *glb, t_alst *arg, char *orig)
{
	char	*padded;
	double	n;
	int		b;
	int		neg;

	neg = 0;
	n = 0;
	b = 0;
	if (glb && arg && orig)
	{
		n = va_arg(glb->ap, double);
		b = arg->info->precision;
		if (b == 0)
			b = 6;
		if (n < 0)
			neg = 1;
		padded = ft_ftoa(n, b);
		assign_flt(arg, neg, padded, orig);
		glb->total += 1;
		arg->next = new_list();
		arg->next->id = (arg->id + 1);
	}
	return (0);
}

int			parse_float(t_glb *glb, t_alst *arg, char *orig)
{
	double	n;
	int		b;

	n = 0;
	b = 0;
	if (glb && arg && orig)
	{
		if ((LENMOD[0] == 'L' || LENMOD[0] == 'l') && LENMOD[1] != 'l')
			parse_long_float(glb, arg, orig);
		else
			parse_norm_float(glb, arg, orig);
	}
	return (0);
}
