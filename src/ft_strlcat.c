/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:55:44 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/22 15:59:33 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*s;
	char	*d;
	size_t	slen;
	size_t	dlen;

	s = (char *)src;
	d = (char *)dest;
	slen = ft_strlen(s);
	dlen = ft_strnlen(d, size);
	if (size == dlen)
	{
		return (size + slen);
	}
	if (slen < (size - dlen))
	{
		ft_memcpy(dest + dlen, src, slen + 1);
	}
	else
	{
		ft_memcpy(dest + dlen, src, size - 1);
		dest[dlen + slen - 1] = '\0';
	}
	return (dlen + slen);
}
