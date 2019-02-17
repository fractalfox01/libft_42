/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:55:44 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/16 16:23:02 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "include/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		len;

	d = dest;
	s = src;
	n = size;
	len = 0;
	if (!(*src))
		return (size);
	while (*dest != '\0' && n > 0)
	{
		n--;
		dest++;
	}
	len = d - dest;
	n = size - len;
	if (n == 0)
		return (len + ft_strlen((char *)s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*dest++ = *s;
			n--;
		}
		s++;
	}
	*dest = '\0';
	return (len + (s - src));
}
