/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oct_to_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 21:04:30 by tvandivi          #+#    #+#             */
/*   Updated: 2019/08/19 18:32:14 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_oct_to_int_helper(char *oct, int nbr, int len, int base)
{
	int	min;

	min = 0;
	if (len >= 3 && oct[0] == '0' && oct[1] == 'o')
		min += 2;
	while (--len >= min)
	{
		if (oct[len] >= '0' && oct[len] <= '7')
			nbr += (oct[len] - 48) * base;
		else
			return (0);
		base *= 8;
	}
	return (nbr);
}

int	ft_otoi(char *str)
{
	int len;

	len = ft_strlen(str);
	return (ft_oct_to_int_helper(str, 0, len, 1));
}
