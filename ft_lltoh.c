/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoh.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 17:38:00 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/21 13:12:12 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lltoh(long long n)
{
	char		*tmp;
	char		*ret;
	long long	i;
	long long	nbr;
	char		*hex;

	hex = ft_strdup("0123456789abcdef");
	tmp = ft_strnew(21);
	i = 0;
	nbr = n;
	if (nbr < 0)
		nbr *= -1;
	while (nbr / 16 > 0)
	{
		tmp[i++] = hex[(nbr % 16)];
		nbr /= 16;
	}
	tmp[i++] = hex[nbr];
	if (n < 0)
		tmp[i++] = '-';
	tmp[i] = '\0';
	ret = ft_strrev(tmp);
	ft_strdel(&tmp);
	ft_strdel(&hex);
	return (ret);
}
