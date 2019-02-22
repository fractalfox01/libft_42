/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 12:12:50 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/21 12:18:22 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
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
	while (*str1 != '\0' && *str2 != '\0')
	{
		diff += *str1 - *str2;
		str1++;
		str2++;
	}
	return (diff);
}
