/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 15:38:18 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/20 16:00:39 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

char	*ft_itoa(int n)
{
	long	nbr;
	char	*ptr;
	int		len;
	int		minus;
	int		i;

	minus = 0;
	len = 0;
	i = 0;
	nbr = n;
	if (nbr < 0)
	{
		minus = 1;
		nbr *= -1;
	}
	while ((nbr % 10) > 0)
	{
		nbr /= 10;
		len++;
	}
	if (minus)
	{
		ptr = ft_strnew(len + 2);
		ptr[i++] = '-';
	}
	else
		ptr = ft_strnew(len + 1);
	nbr = n;
	if (nbr < 0)
	{
		minus = 1;
		nbr *= -1;
	}
	while (i < len)
	{
		nbr /= 10;
		ptr[i++] = ((nbr % 10) + 48);
	}
	return (ptr);
}
