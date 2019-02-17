/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvandivi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/11 21:55:44 by tvandivi          #+#    #+#             */
/*   Updated: 2019/02/17 03:27:53 by tvandivi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "include/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*ptr;
	int		i;
	int		f;
	int		dlen;
	int		s;
	size_t	total;
	int		si;

	i = (int)sizeof(dest);
	dlen = ft_strlen(dest);
	s = (int)sizeof(src);
	f = 0;
	ptr = dest;
	si = (size + (ft_strlen(dest) - ft_strlen((char *)src)));
	total = si;
	if (!(*src) || size == 0)
		return ((size_t)total);
	while (*dest != '\0' && si-- > 0)
	{
		dest++;
	}
	while (*src != '\0' && si > 0)
	{
		*dest++ = *src++;
		si--;
	}
	*dest = '\0';
	return ((size_t)total);
}
