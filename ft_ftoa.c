/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 20:11:39 by tvandivi          #+#    #+#             */
/*   Updated: 2019/08/20 16:49:30 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ftoa(double flt, int afterpoint)
{
	char	*str;
	char	*tmp;
	int		i;
	double	f;
	double	d;

	i = (int)flt;
	afterpoint++;
	str = ft_strjoin(ft_itoa(i), ".");
	d = flt - (float)i;
	f = d;
	i = 0;
	if (afterpoint > 18)
		return (NULL);
	if (d > 0 && i++ < afterpoint)
	{
		d = d * ft_power(afterpoint, 10);
		tmp = ft_strjoin(str, ft_ltoa((long)d));
		ft_strdel(&str);
		str = ft_strdup(tmp);
	}
	return (str);
}
