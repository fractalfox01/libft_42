/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 17:58:02 by tvandivi          #+#    #+#             */
/*   Updated: 2019/08/26 10:41:49 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoo(int nbr)
{
	int		oct;
	char	*str;
	char	*ret;
	int		i;

	i = 0;
	oct = 0;
	str = ft_strnew(30);
	ft_bzero(str, 30);
	while (nbr / 8 > 0)
	{
		if (nbr % 8 > 0)
			str[i] = (nbr % 8) + 48;
		else
			str[i] = '0';
		nbr /= 8;
		i++;
	}
	str[i] = (nbr + 48);
	ret = ft_strrev(str);
	ft_strdel(&str);
	return (ret);
}
