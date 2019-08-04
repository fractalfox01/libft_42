/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 23:18:50 by tvandivi          #+#    #+#             */
/*   Updated: 2019/08/01 23:43:08 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi_base(const char *str, int str_base)
{
	char	*base;
	int		dir;
	int		nbr;

	nbr = 0;
	dir = 1;
	base = ft_strdup("0123456789abcdef");

	while (*str == '\f' || *str == ' ' || *str == '\n' || *str == '\r' \
			|| *str == '\v' || *str == '\t')
	{
		str++;
	}
	if (*str == '-')
	{
		str++;
		dir = -1;
	}
	while (ft_isdigit(*str) || (*str >= 'a' || *str <= 'f') || (*str >= 'A' \
				|| *str <= 'F'))
	{
		if ((*str >= 'a' || *str <= 'f') || (*str >= 'A' || *str <= 'F'))
		{
			
		}
		nbr = nbr * base + (str - 48);
		str++;
	}
	free((void *)base);
	return (nbr * dir);
}
