/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_oct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 21:54:02 by tvandivi          #+#    #+#             */
/*   Updated: 2019/08/03 23:04:43 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dec_to_oct(int nbr)
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
	oct = ft_atoi(ret);
	free((void *)str);
	return (oct);
}
