/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <tvandivi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 14:53:32 by tvandivi          #+#    #+#             */
/*   Updated: 2019/09/12 12:43:52 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoll(char *str)
{
	long long	nbr;
	long long	dir;

	nbr = 0;
	dir = 1;
	if (*str == 0)
		return (0);
	while (*str == '\f' || *str == ' ' || *str == '\n' || *str == '\r' \
			|| *str == '\v' || *str == '\t')
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			dir *= -1;
		str++;
	}
	while (*str > 47 && *str < 58)
	{
		nbr = nbr * 10 + (*str - 48);
		str++;
	}
	return (nbr * dir);
}
