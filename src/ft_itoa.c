/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 15:38:18 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/26 22:40:49 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long	nbr;
	char	*ptr;
	long	len;
	long	b;
	long	tmp;

	len = 1;
	b = 0;
	nbr = (long)n;
	if ((n < 0) && n != -2147483648)
		nbr = -nbr;
	tmp = nbr;
	while (tmp >= 10)
		tmp = (nbr / ft_power(len++));
	len--;
	ptr = ft_strnew(len + 1);
	if (!ptr)
		return (NULL);
	if (n < 0)
		ptr[b++] = '-';
	if (nbr == 0 && (ptr[b] = '0'))
		return (ptr);
	return (ft_worditoa(ptr, nbr, len, b));
}
