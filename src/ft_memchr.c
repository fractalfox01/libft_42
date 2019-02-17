/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 12:11:03 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/13 10:20:07 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *s;

	s = (unsigned char *)str;
	while (n-- > 0)
	{
		if (*(char *)s == c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
