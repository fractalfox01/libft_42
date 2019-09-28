/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lftoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 21:31:48 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/23 14:22:17 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	fp_lpow(long n, long base)
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

static char	*fp_lhlper(char *ret, char *ip, int ap)
{
	char	*stmp;

	stmp = ft_strnew(ap);
	ft_memset(stmp, '0', ap);
	if (!(ret))
		ip = ft_strdup("0");
	else
		ip = ft_strdup(ret);
	ft_strdel(&ret);
	ret = ft_strjoin(ip, stmp);
	ft_strdel(&stmp);
	return (ret);
}

static void	set_direction(t_ftoa *lftoa)
{
	if (lftoa->d < 0)
	{
		lftoa->dir *= -1;
		lftoa->d *= lftoa->dir;
	}
}

char		*ft_lftoa(long double flt, int afterpoint)
{
	t_ftoa	lftoa;

	lftoa.dir = 1;
	lftoa.n = (long long)flt;
	lftoa.int_part = ft_strjoin(ft_lltoa(lftoa.n), ".");
	lftoa.d = flt - lftoa.n;
	lftoa.n = 0;
	set_direction(&lftoa);
	while (lftoa.d > 0 && lftoa.n++ < afterpoint)
	{
		lftoa.d = lftoa.d * fp_lpow(2, 10);
		lftoa.stmp = ft_itoa((int)lftoa.d);
		lftoa.d = lftoa.d - (int)lftoa.d;
		lftoa.ret = ft_strjoin(lftoa.int_part, lftoa.stmp);
		ft_strdel(&lftoa.int_part);
		lftoa.int_part = ft_strdup(lftoa.ret);
		ft_strdel(&lftoa.stmp);
	}
	if (lftoa.n < afterpoint)
		lftoa.ret = fp_lhlper(lftoa.ret, lftoa.int_part, afterpoint - lftoa.n);
	ft_strdel(&lftoa.int_part);
	return (lftoa.ret);
}
