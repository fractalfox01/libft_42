/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:11:39 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/23 14:19:04 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	fp_pow(long n, long base)
{
	long	i;
	long	nbr;

	i = 1;
	nbr = 1;
	if (n == 1)
		return (1);
	if (n > 1)
	{
		while (i++ < n)
			nbr *= base;
	}
	else
		return (-1);
	return (nbr);
}

static void	set_direction(long double *d, int *dir)
{
	if (*d < 0)
	{
		*dir = -1;
		*d *= -1;
	}
}

char		*ft_ftoa(long double flt, int afterpoint)
{
	t_ftoa	ftoa;

	ftoa.dir = 1;
	ftoa.n = (long long)flt;
	ftoa.int_part = ft_strjoin(ft_lltoa(ftoa.n), ".");
	ftoa.d = flt - (long long)flt;
	ftoa.n = 0;
	set_direction(&ftoa.d, &ftoa.dir);
	while (ftoa.d >= 0 && ftoa.d < 1 && ftoa.n++ < afterpoint)
	{
		ftoa.d = ftoa.d * fp_pow(2, 10);
		ftoa.stmp = ft_lltoa((int)ftoa.d);
		ftoa.d = ftoa.d - (int)ftoa.d;
		ftoa.ret = ft_strjoin(ftoa.int_part, ftoa.stmp);
		ft_strdel(&ftoa.int_part);
		ftoa.int_part = ft_strdup(ftoa.ret);
		ft_strdel(&ftoa.stmp);
	}
	ft_strdel(&ftoa.int_part);
	return (ftoa.ret);
}
