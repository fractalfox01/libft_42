/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 13:11:30 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/21 13:12:03 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoh(unsigned int n)
{
	char			*tmp;
	char			*ret;
	int				i;
	unsigned int	nbr;
	char			*hex;

	hex = ft_strdup("0123456789abcdef");
	tmp = ft_strnew(19);
	i = 0;
	nbr = n;
	while (nbr / 16 > 0)
	{
		tmp[i++] = hex[(nbr % 16)];
		nbr /= 16;
	}
	tmp[i++] = hex[nbr];
	tmp[i] = '\0';
	ret = ft_strrev(tmp);
	ft_strdel(&tmp);
	ft_strdel(&hex);
	return (ret);
}
