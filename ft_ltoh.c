/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 18:01:06 by tvandivi          #+#    #+#             */
/*   Updated: 2019/08/19 18:07:59 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*find_value(char *ptr, long nbr, long len, long b)
{
	long	rem;
    long    a;
    int     i;
    char    *hex;

	rem = 1;
    a = 0;
    i = 0;
    hex = ft_strdup("0123456789abcdef");
	while (len > 0)
	{
        a = ft_power(len, 16);
		ptr[b++] = hex[nbr / a];
		rem = (nbr % a);
		nbr -= a * (nbr / a);
		len--;
	}
	return (ptr);
}

char		*ft_ltoh(long n)
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
		tmp = (nbr / ft_power(len++, 16));
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
