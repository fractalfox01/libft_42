/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 12:47:49 by tvandivi          #+#    #+#             */
/*   Updated: 2019/08/19 12:53:09 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*find_value(char *ptr, long nbr, long len, long b)
{
	long	rem;

	rem = 1;
	while (len > 0)
	{
		ptr[b++] = (nbr / ft_power(len, 10)) + 48;
		rem = (nbr % ft_power(len, 10));
		nbr -= ft_power(len, 10) * (nbr / ft_power(len, 10));
		len--;
	}
	return (ptr);
}

char		*ft_ltoa(long n)
{
	long	nbr;
	char	*ptr;
	long	len;
	long	b;
	long	tmp;

	len = 1;
	b = 0;
	nbr = (long)n;
	tmp = nbr;
	while (tmp >= 10)
		tmp = (nbr / ft_power(len++, 10));
	if (len != 1)
		len--;
	ptr = ft_strnew(len + 1);
	if (!ptr)
		return (NULL);
	if (n < 0)
		ptr[b++] = '-';
	if (nbr == 0 && (ptr[b] = '0'))
		return (ptr);
	return (find_value(ptr, nbr, len, b));
}
