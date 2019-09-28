/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 16:46:44 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/26 16:56:21 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itob(int n)
{
	char	*tmp;
	char	*ret;
	long	i;
	long	nbr;

	tmp = ft_strnew(12);
	i = 0;
	nbr = (long)n;
	if (nbr < 0)
		nbr *= -1;
	while (nbr / 2 > 0)
	{
		tmp[i++] = (nbr % 2) + 48;
		nbr /= 2;
	}
	tmp[i++] = nbr + 48;
	if (n < 0)
		tmp[i++] = '-';
	tmp[i] = '\0';
	ret = ft_strrev(tmp);
	ft_strdel(&tmp);
	return (ret);
}
