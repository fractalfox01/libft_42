/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:45:57 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/11 14:48:54 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stoa(short n)
{
	char	*tmp;
	char	*ret;
	short	i;
	short	nbr;

	tmp = ft_strnew(21);
	i = 0;
	nbr = (short)n;
	if (nbr < 0)
		nbr *= -1;
	while (nbr / 10 > 0)
	{
		tmp[i++] = (nbr % 10) + 48;
		nbr /= 10;
	}
	tmp[i++] = nbr + 48;
	if (n < 0)
		tmp[i++] = '-';
	tmp[i] = '\0';
	ret = ft_strrev(tmp);
	ft_strdel(&tmp);
	return (ret);
}
