/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_worditoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 23:39:48 by tvandivi          #+#    #+#             */
/*   Updated: 2019/03/10 14:37:34 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_worditoa(char *ptr, long nbr, long len, long b)
{
	char	*cat;
	long	rem;

	rem = 1;
	cat = "-2147483648";
	if (nbr == -2147483648)
	{
		b = -1;
		ptr = ft_strnew(12);
		while (++b < 11)
			ptr[b] = cat[b];
		return (ptr);
	}
	while (len > 0)
	{
		ptr[b++] = (nbr / ft_power(len, 10)) + 48;
		rem = (nbr % ft_power(len, 10));
		nbr -= ft_power(len, 10) * (nbr / ft_power(len, 10));
		len--;
	}
	return (ptr);
}
