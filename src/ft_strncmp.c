/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 12:14:02 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/16 16:51:30 by tvandivi         ###   ########.fr       */
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
	if (*str2 == 0)
	{
		if (*str1 == 0)
			return (0);
		return (1);
	}
	while (*str1 != '\0'  && *str2 != '\0' && c > 0)
	{
		c--;
		diff = *str1 - *str2;
		str1++;
		str2++;
	}
	return (diff);
}
