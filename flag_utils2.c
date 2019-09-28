/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 18:18:02 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/27 17:54:32 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	prec_helpr(t_alst *arg, char *fmt)
{
	int ret;

	ret = 0;
	if (ft_isdigit(*fmt))
	{
		if (*fmt == '0')
			arg->info->blank = 1;
		arg->info->precision = ft_atoi(fmt);
		while (ft_isdigit(*fmt))
		{
			ret++;
			fmt++;
		}
	}
	else
	{
		arg->info->precision = 0;
		arg->info->blank = 1;
	}
	return (ret);
}

int			parse_precision(t_alst *arg, char *fmt)
{
	int	ret;

	ret = 0;
	if (*fmt == '.')
	{
		fmt++;
		ret++;
		ret += prec_helpr(arg, fmt);
	}
	else
		arg->info->precision = 0;
	return (ret);
}

static int	precheck(t_alst *arg, int *ret)
{
	ZERO_FLAG = 1;
	*ret += 1;
	return (*ret);
}

int			parse_flags(t_alst *arglst, char *fmt)
{
	int	ret;

	ret = 0;
	arglst->info->blank_flag = 0;
	arglst->info->hash_flag = 0;
	arglst->info->minus_flag = 0;
	arglst->info->plus_flag = 0;
	if (*fmt == '0')
		fmt += precheck(arglst, &ret);
	while (*fmt == ' ' || *fmt == '#' || *fmt == '-' || *fmt == '+')
	{
		if (*fmt == ' ')
			arglst->info->blank_flag = 1;
		if (*fmt == '#')
			arglst->info->hash_flag = 1;
		if (*fmt == '-')
			arglst->info->minus_flag = 1;
		if (*fmt == '+')
			arglst->info->plus_flag = 1;
		fmt++;
		ret++;
	}
	return (ret);
}

int			parse_fieldwidth(t_alst *arglst, char *fmt)
{
	int ret;

	ret = 0;
	if (ft_isdigit(*fmt))
	{
		if (fmt[0] == '0')
			arglst->info->zero_flag = 1;
		arglst->info->fieldwidth = ft_atoi(fmt);
		while (ft_isdigit(*fmt) && *fmt != '\0')
		{
			fmt++;
			ret++;
		}
		return (ret);
	}
	else
		arglst->info->fieldwidth = 0;
	return (0);
}
