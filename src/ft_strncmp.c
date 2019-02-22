/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 12:14:02 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/21 14:28:16 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "include/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t c)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				diff;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	diff = *str1 - *str2;
	if (!(s1) || !(s2))
	{
		return (1);
	}
	if (c != 0)
	{
		while (*str1 != '\0' && *str2 != '\0' && c-- > 0)
		{
			if (*str1 != *str2)
				return (*str1 - *str2);
			str1++;
			str2++;
		}
	}
	else
		return (0);
	return (diff);
}
