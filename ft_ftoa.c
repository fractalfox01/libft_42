/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:11:39 by tvandivi          #+#    #+#             */
/*   Updated: 2019/08/20 13:25:47 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	fp_pow(double n, int base)
{
	long	i;
	int		nbr;

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

char	*ft_ftoa(double flt, int afterpoint)
{
	char	*str;
	char	*tmp;
	int		p;
	int		i;
	double	f;

	p = (int)flt;
	f = flt - (float)p;
	f *= 10;
	i = 0;
	str = ft_itoa(p);
	if (p != 0 && afterpoint)
	{
		while (f > 0 && i++ < 10)
		{
			printf("inner: %d\n", fp_pow(10, f));
			f = f * fp_pow(10, f);
			tmp = ft_strjoin(str, ft_itoa((int)f % 10));
			ft_strdel(&str);
			str = ft_strdup(tmp);
			ft_strdel(&tmp);
		}
	}
	return (str);
}
