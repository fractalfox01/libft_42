/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 15:38:18 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/20 21:51:16 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"
#include <stdio.h>

int	ft_power(int n)
{
	int i;
	int nbr;

	i = 1;
	nbr = 1;
	if (n == 1)
		return (1);
	if (n > 1)
	{
		while (i++ < n)
		{
			nbr *= 10;
		}
	}
	return (nbr);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*ptr;
	int		len;
	int		sign;
	int		b;
	int		rem;
	int		tmp;

	rem = 1;
	sign = (n < 0);
	len = 1;
	b = 0;
	nbr = n;
	if (sign)
	{
		nbr = -nbr;
	}
	tmp = nbr;
	while (tmp > 10)
	{
		tmp = (nbr / ft_power(len));
		len++;
	}
	len--;
	ptr = ft_strnew(len + 1);
	if (sign)
	{
		ptr[b++] = '-';
	}
	if (nbr == 0)
	{
		ptr[b] = '0';
		return (ptr);
	}
	if (nbr == -2147483648)
	{
		ptr = "-2147483648";
		return (ptr);
	}
	while (len > 0)
	{
		ptr[b++] = (nbr / ft_power(len)) + 48;
		rem = (nbr % ft_power(len));
//		if (rem > 0)
//		{
//			ptr[b++] = rem + 48;
//			len--;
//		}
		nbr -= ft_power(len) * (nbr / ft_power(len));
		len--;
//		printf("nbr: %ld\n", nbr);
	}
	return (ptr);
}
