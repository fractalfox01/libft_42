/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:55:44 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/17 16:25:03 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "include/libft.h"

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
	if (size > (dlen + slen))
	{
		ft_strncat(d, s, size);
		return (dlen + slen);
	}
	if (dlen == size)
		return (size + slen);
	ft_strncat(d, s, slen - 1);
	return (dlen + slen);
}
